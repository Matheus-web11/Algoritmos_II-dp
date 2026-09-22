#include <stdio.h>

/*Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas
datas*/

struct Data
  {
  int Dia;
  int Mes;
  int Ano;  
  };

int main()
  {
  struct Data Datas[2];
  
  int distancia_datas = 0, somas_datas[2] = {0};

  printf("Digite duas datas, com (DIA), (MES) e ANO, de 1950 a 2030.\n");

  for(int i = 0; i < 2; i++)
    {
    while(Datas[i].Dia > 31 || Datas[i].Dia < 1)
      {
      printf("%d Data.\n" , i + 1);
      printf("\nDia: ");
      scanf("%d" , &Datas[i].Dia);
      if(Datas[i].Dia > 31 || Datas[i].Dia < 1)
        {
        printf("\nDia invalido. Tente Novamente\n");
        }
      }
    while(Datas[i].Mes > 12 || Datas[i].Mes < 1)
      {
      printf("\nMes: ");
      scanf("%d" , &Datas[i].Mes);
      if(Datas[i].Mes > 12 || Datas[i].Mes < 1)
        {
        printf("\nMes invalido. Tente Novamente\n");
        }
      }
    while(Datas[i].Ano > 2030 || Datas[i].Ano < 1950)
      {
      printf("\nAno: ");
      scanf("%d" , &Datas[i].Ano);
      if(Datas[i].Ano > 2030 || Datas[i].Ano < 1950)
        {
        printf("\nPor Favor digite novamente o ano podendo ser de (1950 ate 2030).\n");
        }
      }
    }
  
  
  somas_datas[0] = (Datas[0].Dia) + (Datas[0].Mes * 30) + (Datas[0].Ano * 365);

  somas_datas[1] = (Datas[1].Dia) + (Datas[1].Mes * 30) + (Datas[1].Ano * 365);
 
  distancia_datas = somas_datas[0] - somas_datas[1];

  printf("A distancia de uma data pela outra eh: %d dias\n" , distancia_datas);

  return 0;
  }