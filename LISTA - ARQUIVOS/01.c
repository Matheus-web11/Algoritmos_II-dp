#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para criar os arquivos a seguir: 
Clientes: Cod_Cli, Nome, Endereco, Fone 
Recebimentos: Num_doc, Valor_doc, Data_Emissao, Data_Vencimento, Cod_Cli.*/


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
  
  if(arquivo_clientes == NULL)
    {
    return 1;
    }

  if(arquivo_recebimentos == NULL)
    {
    return 1;
    } 

  fclose(arquivo_clientes);
  fclose(arquivo_recebimentos);

  return (0);
  } 