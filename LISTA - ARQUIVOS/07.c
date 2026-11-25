#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça  um  programa  que  mostre  todos  os  recebimentos  com  data  de  vencimento 
dentro de um período qualquer. Não esqueça de mostrar também o nome do cliente e o 
total de dias em atraso. Quando não houver atraso, mostrar zero. */

struct Clientes
  {
  int cod_Cli;
  char nome[50];
  char endereco[50];
  char telefone[20];
  };

struct Recebimentos
  {
  int num_Doc;
  float valor_Doc;
  char data_Emissao[12];
  char data_Vencimento[12];
  int cod_Cli;
  };


void atualizarArquivos(struct Clientes cls[], struct Recebimentos rbs[],
                       int total_clientes, int total_recebimentos)
  {
  FILE *arq_clientes = fopen("Clientes.txt", "w");
  FILE *arq_recebimentos = fopen("Recebimentos.txt", "w");

  if((arq_clientes == NULL) || (arq_recebimentos == NULL))
    return;

  for(int i = 0; i < total_clientes; ++i)
    {
     fprintf(arq_clientes, "%d;%s;%s;%s\n",
     cls[i].cod_Cli, cls[i].nome, cls[i].endereco, cls[i].telefone);
    }
  fclose(arq_clientes);

  for(int i = 0; i < total_recebimentos;++i)
    {
    fprintf(arq_recebimentos, "%d;%.2f;%s;%s;%d\n",
    rbs[i].num_Doc, rbs[i].valor_Doc, rbs[i].data_Emissao, rbs[i].data_Vencimento, rbs[i].cod_Cli);
    }
  fclose(arq_recebimentos);
  }

int main()
  {
  FILE *arquivo_clientes = fopen("Clientes.txt", "r");
  FILE *arquivo_recebimentos = fopen("Recebimentos.txt", "r");
  if((arquivo_clientes == NULL) || (arquivo_recebimentos == NULL))
    return 1;

  int total_clientes = 0, total_recebimentos = 0;
  int opcao;
  int i = 0;

  struct Clientes cls[total_clientes];
  struct Recebimentos rcbs[total_recebimentos];

  printf("Selecione a opcao desejada.\n");
  do
    {
    printf("0-Interromper\n1-Cadastrar Clientes.\n2-Buscar Cliente.\n3-Excluir Cliente.\n4- Cadastrar Recebimentos.\n5-Alterar Cliente.\n");
    printf("opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
      {
    case 0:
      printf("Interrompendo o programa.\n");
      break;

    case 1:
      {
      puts("## CADASTRAR CLIENTES ##");

      printf("Codigo: ");
      scanf("%d", &cls[total_clientes].cod_Cli);

      /*FUNCAO - LIMPAR O BUFFER*/
      setbuf(stdin, NULL);

      printf("Nome: ");
      fgets(cls[total_clientes].nome, 50, stdin);

      /*como se le essa funcao strcspn
      "dentro do meu vetor encontre um caracter especifico ("\n"), se
      encontra-lo substitua por '\0'*/
      cls[total_clientes].nome[strcspn(cls[total_clientes].nome, "\n")] = '\0';

      printf("Endereco: ");
      fgets(cls[total_clientes].endereco, 50, stdin);
      cls[total_clientes].endereco[strcspn(cls[total_clientes].endereco, "\n")] = '\0';

      printf("Telefone: ");
      fgets(cls[total_clientes].telefone, 20, stdin);
      cls[total_clientes].telefone[strcspn(cls[total_clientes].telefone, "\n")] = '\0';

      // printf("%d, %s, %s, %s", cls.cod_Cli, cls.nome, cls.endereco,
      // cls.telefone);
      total_clientes++;
      atualizarArquivos(cls, rcbs, total_clientes, total_recebimentos);
      break;
      }

    case 2:
      {
      struct Recebimentos rbs;
      int encontrado = 0;
        
      printf("Digite o Codigo do Cliente que deseja buscar: ");
      scanf("%d", &rbs.cod_Cli);

      for(int i = 0; i < total_clientes; ++i)
        {
        if(cls[i].cod_Cli == rbs.cod_Cli)
          {
          encontrado = 1;
          break;
          }
        }
        
      if(encontrado)
        {
        fprintf(arquivo_recebimentos, "Cliente cadastrado.\n");
        break;
        }
      else
        {
        fprintf(arquivo_recebimentos, "Cliente nao cadastrado.\n");
        break;
        }
      }

    case 3:
      {
      int cod_excluir;
      printf("Digite o Codigo do cliente que deseja excluir: ");
      scanf("%d", &cod_excluir);

      int posicao = -1;
      for(int i = 0; i < total_clientes; ++i)
        {
        if(cls[i].cod_Cli == cod_excluir)
          {
          posicao = i;
          break;
          }
        }
      /*PULA*/
      if(posicao == -1)
        {
        printf("Cliente de codigo %d nao encontrado para exclusao.\n", cod_excluir);
        break;
        }

      /*remover cliente - redimensionando o vetor*/
      for(int j = posicao; j < total_clientes - 1; ++j)
        {
        cls[j] = cls[j + 1];
        }
      total_clientes--;

      /*remover recebimentos*/
      int novo_totalRecebimentos = 0;
      for(int k = 0; k < total_recebimentos; ++k)
        {
        if(rcbs[k].cod_Cli != cod_excluir)
          {
          rcbs[novo_totalRecebimentos] = rcbs[k];
          novo_totalRecebimentos++;
          }
        }
      total_recebimentos = novo_totalRecebimentos;

      atualizarArquivos(cls, rcbs, total_clientes, total_recebimentos);
      printf("Cliente e recebimentos excluidos.\n");
      break;
      }

    case 4:
      {
      puts("## CADASTRAR RECEBIMENTOS ##");
      printf("Insira o codigo do cliente: ");
      scanf("%d", &rcbs[total_recebimentos].cod_Cli);

      int encontrado = 0;

      for(int i = 0; i < total_clientes; ++i)
        {
        if(cls[i].cod_Cli == rcbs[total_recebimentos].cod_Cli)
          {
          encontrado = 1;
          break;
          }
        }
      if(encontrado == 0)
        {
        printf("Cliente nao encontrado.\n");
        break;
        }

      printf("Numero de documento: ");
      scanf("%d", &rcbs[total_recebimentos].num_Doc);

      printf("Valor do documento: ");
      scanf("%f", &rcbs[total_recebimentos].valor_Doc);

      setbuf(stdin, NULL);

      printf("Data de Emissao: ");
      fgets(rcbs[total_recebimentos].data_Emissao,12,stdin);
      rcbs[total_recebimentos].data_Emissao[strcspn(rcbs[total_recebimentos].data_Emissao, "\n")] = '\0';

      printf("Data de Vencimento: ");
      fgets(rcbs[total_recebimentos].data_Vencimento,12,stdin);
      rcbs[total_recebimentos].data_Vencimento[strcspn(rcbs[total_recebimentos].data_Vencimento, "\n")] = '\0';


    /*indica que tem um novo recebimento registrado*/
    total_recebimentos++;
      atualizarArquivos(cls, rcbs, total_clientes, total_recebimentos);
      printf("Recebimento cadastrado.\n");
      break;
      }

    case 5:
      {
      int posicao = -1;
      int getCliente = 0;

      printf("Digite o codigo do cliente que queira modificar: ");
      scanf("%d", &getCliente);

      for(int i = 0; i < total_clientes; ++i)
        {
        if(cls[i].cod_Cli == getCliente)
          {
          posicao = i;
          break;
          }
        }
         /*PULA*/
      if(posicao == -1)
        {
        printf("Cliente de codigo %d nao encontrado para exclusao.\n", getCliente);
        break;
        }

      printf(" ## Registrando novo cliente. ##\n");

      /*Sobscreevendo novos dados no cliente especifico que esta no vetor de total_clientes*/

      printf("Nome: ");
      fgets(cls[posicao].nome, 50, stdin);

      /*como se le essa funcao strcspn
      "dentro do meu vetor encontre um caracter especifico ("\n"), se
      encontra-lo substitua por '\0'*/
      cls[posicao].nome[strcspn(cls[posicao].nome, "\n")] = '\0';

      printf("Endereco: ");
      fgets(cls[posicao].endereco, 50, stdin);
      cls[posicao].endereco[strcspn(cls[posicao].endereco, "\n")] = '\0';

      printf("Telefone: ");
      fgets(cls[posicao].telefone, 20, stdin);
      cls[posicao].telefone[strcspn(cls[posicao].telefone, "\n")] = '\0';

      // printf("%d, %s, %s, %s", cls.cod_Cli, cls.nome, cls.endereco,
      // cls.telefone);
      atualizarArquivos(cls, rcbs, total_clientes, total_recebimentos);
      break;
      }

    case 6:
      {
      puts("## MUDAR RECEBIMENTOS ##");
      int getCodigoCliente, getNumeroDoc;
      int posicao = -1;

      printf("Digite o codigo do cliente: ");
      scanf("%d", &getCodigoCliente);

      printf("Digite o numero do documento: ");
      scanf("%d", &getNumeroDoc);

      for(int i = 0; i < total_recebimentos; ++i)
        {
        if((rcbs[i].cod_Cli == getCodigoCliente) && (rcbs[i].num_Doc == getNumeroDoc))
          {
          posicao = i;
          break;
          }
        }

      if(posicao == -1)
        {
        printf("Codigo do cliente e numero do documento nao coincidem.\n");
        break;
        }

      puts("## MUDANDO RECEBIMENTOS ##");

      printf("Valor do documento: ");
      scanf("%f", &rcbs[posicao].valor_Doc);

      setbuf(stdin, NULL);

      printf("Data de Emissao: ");
      fgets(rcbs[posicao].data_Emissao,12,stdin);
      rcbs[posicao].data_Emissao[strcspn(rcbs[posicao].data_Emissao, "\n")] = '\0';

      printf("Data de Vencimento: ");
      fgets(rcbs[posicao].data_Vencimento,12,stdin);
      rcbs[posicao].data_Vencimento[strcspn(rcbs[posicao].data_Vencimento, "\n")] = '\0';

      atualizarArquivos(cls, rcbs, total_clientes, total_recebimentos);
      break;
      }

    case 7:
      {
      puts("## VER RECEBIMENTO POR TEMPO ##");

      int d_inicio, m_inicio, a_inicio;
      int d_fim, m_fim, a_fim;
      int d_hoje, m_hoje, a_hoje;

      printf("Data inicial (DD/MM/AAAA): ");
      scanf("%d/%d/%d", &d_inicio, &m_inicio, &a_inicio);

      printf("Data final (DD/MM/AAAA): ");
      scanf("%d/%d/%d", &d_fim, &m_fim, &a_fim);

      printf("Data de hoje (DD/MM/AAAA): ");
      scanf("%d/%d/%d", &d_hoje, &m_hoje, &a_hoje);

      /*Formato AAAAMMDD para comparar o periodo*/
      int ini_num = (a_inicio * 10000) + (m_inicio * 100) + d_inicio;
      int fim_num = (a_fim * 10000) + (m_fim * 100) + d_fim;

      /*Converte hoje em dias para calcular o atraso do nosso recebimento*/
      int total_hoje = (a_hoje * 365) + (m_hoje * 30) + d_hoje;

      int encontrou = 0;

      for(int i = 0; i < total_recebimentos; ++i)
        {
        int d_venc, m_venc, a_venc;

        /*Quebra a string data_Vencimento em tres inteiros*/
        sscanf(rcbs[i].data_Vencimento, "%d/%d/%d", &d_venc, &m_venc, &a_venc);

        /*converter para Ano, mes e dia*/
        int venc_num = (a_venc * 10000) + (m_venc * 100) + d_venc;

        if((venc_num >= ini_num) && (venc_num <= fim_num))
          {
          /*Busca o nome do cliente no vetor cls pelo codigo*/
          char nome_cliente[50] = "Cliente nao encontrado";
          for(int j = 0; j < total_clientes; ++j)
            {
            if(cls[j].cod_Cli == rcbs[i].cod_Cli)
              {
              /*primeiro parametro copia oque tiver no segundo parametro*/
              strcpy(nome_cliente, cls[j].nome);
              break;
              }
          }

      /*Calcula os dias em atraso*/
        int total_venc = (a_venc * 365) + (m_venc * 30) + d_venc;
        int atraso = total_hoje - total_venc;

        if(atraso < 0)
          atraso = 0;

        printf("\nDocumento: %d\nCliente: %s\nValor: R$ %.2f\nVencimento: %s\nAtraso: %d dias\n",
                 rcbs[i].num_Doc, nome_cliente, rcbs[i].valor_Doc,
                 rcbs[i].data_Vencimento, atraso);

        encontrou = 1;
        }
      }

      if(encontrou == 0)
        {
        printf("Nenhum recebimento encontrado nesse periodo.\n");
        }

      break;
      }
        
    default:
      printf("Nenhuma das opcoes selecionadas.\n");
      break;
      }

    } while (opcao != 0);

  fclose(arquivo_clientes);
  fclose(arquivo_recebimentos);
  return (0);
  }