#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça  um  programa  que  inclua  recebimentos  no  arquivo  criado  no  Exercício  1, 
devendo verificar se o cliente já se encontra cadastrado. */

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

int main()
  {
  FILE *arquivo_clientes = fopen("Clientes.txt", "w");
  FILE *arquivo_recebimentos = fopen("Recebimentos.txt", "w");
  if((arquivo_clientes == NULL) || (arquivo_recebimentos == NULL))
    return 1;

  int opcao;
  int i = 0;

  int total_clientes = 0;

  struct Clientes cls[total_clientes];

  printf("Selecione a opcao desejada.\n");
  do
    {
    printf("0-Interromper\n 1-Cadastrar Clientes.\n 2-Buscar Cliente.\n");
    printf("opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
      {
    case 0:
      printf("Interrompendo o programa.\n");
      break;

    case 1:
      puts("## CADASTRAR CLIENTES ##");

      printf("Codigo: ");
      scanf("%d", &cls[i].cod_Cli);

      /*FUNCAO - LIMPAR O BUFFER*/
      setbuf(stdin, NULL);

      printf("Nome: ");
      fgets(cls[i].nome, 50, stdin);

      /*como se le essa funcao strcspn
      "dentro do meu vetor encontre um caracter especifico ("\n"), se
      encontra-lo substitua por '\0'*/
      cls[i].nome[strcspn(cls[i].nome, "\n")] = '\0';

      printf("Endereco: ");
      fgets(cls[i].endereco, 50, stdin);
      cls[i].endereco[strcspn(cls[i].endereco, "\n")] = '\0';

      printf("Telefone: ");
      fgets(cls[i].telefone, 20, stdin);
      cls[i].telefone[strcspn(cls[i].telefone, "\n")] = '\0';

      // printf("%d, %s, %s, %s", cls.cod_Cli, cls.nome, cls.endereco,
      // cls.telefone);
      fprintf(arquivo_clientes,
              "%d Cliente cadastrado.\nCodigo: %d;\nNome: %s;\nEndereco: "
              "%s;\nTelefone: %s\n\n", i + 1,
              cls[i].cod_Cli, cls[i].nome, cls[i].endereco, cls[i].telefone);

      break;

    case 2:
        {
        struct Recebimentos rbs;
        int encontrado = 0;
        
        printf("Digite o Codigo do Cliente que deseja buscar: ");
        scanf("%d", &rbs.cod_Cli);

        for(int i = 0; i < limite_clientes; ++i)
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


    default:
      printf("Nenhuma das opcoes selecionadas.\n");
      return 1;
      }

    ++i;
    } while (opcao != 0);

  fclose(arquivo_clientes);
  fclose(arquivo_recebimentos);
  return (0);
  }