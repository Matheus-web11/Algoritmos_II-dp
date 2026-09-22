#include <stdio.h>
#include <stdlib.h>

int calcularTabuada(int numTabuada)
  {
  int resul_Tabuada = 0;

  for(int i = 0; i <= 10; ++i)
    {
    resul_Tabuada = i * numTabuada;
    printf("[%d x %d] = %d\n", numTabuada, i, resul_Tabuada);
    }
  return resul_Tabuada;
  }


int main()
  {
  int numTabuada = 0;
  int tabuadaFeita = 0;
  printf("--TABUADA--.\n");

  printf("Insira o numero para realizar a tabuada.\n");

  printf("--> ");
  scanf("%d" , &numTabuada);

  while(numTabuada < 0)
    {
    printf("Por favor, numeros positivos.\n");
    printf("--> ");
    scanf("%d" , &numTabuada);
    }
  tabuadaFeita = calcularTabuada(numTabuada);

  return (0);
  }
