#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void printVetor(int *p1)
  {
  for(int i = 0; i < 8; ++i)
    {
    printf("Elemento na posicao[%d] = %d\n", i ,*(p1 + i));
    }
  } 

int main()
  {
  int vet[8] = {2,4,6,56,78,80,67, 777};

  printVetor(vet);
  return (0);
  }
