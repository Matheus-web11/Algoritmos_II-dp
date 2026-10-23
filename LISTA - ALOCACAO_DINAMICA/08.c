#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o 
ponteiro  para  um  vetor  de  tamanho  N  alocado  dinamicamente.  Se  N  for  negativo  ou 
igual a zero, um ponteiro nulo deverá ser retornado.*/

int *vetorAlocado(int tamanho)
  {
  if(tamanho > 0)
    {
    int *p1Conqueror = (int *)calloc(tamanho, sizeof(int));

    for(int i = 0; i < tamanho; ++i)
      {
      *(p1Conqueror + i) = i + 2;
      }
    return p1Conqueror;
    }
  
    printf("O tamanho deve ser POSITIVO!\n");
    return NULL;
  }


int main()
  {
  int tam = 0;
  int *getVetor;
  puts("## ALOCANDO VETOR ##");

  printf("Escolha o tamanho do vetor.\n");
  printf("Tamanho: ");
  scanf("%d", &tam);

  getVetor = vetorAlocado(tam);

  if(getVetor == NULL)
    return 0;

  puts("## ELEMENTOS DO VETOR ##");

  for(int i = 0; i < tam; ++i)
    {
    printf("Valor na posicao[%d] = %d\n", i, *(getVetor + i));
    }

  free(getVetor);
  getVetor = NULL;

  return (0);
  }