#include <stdio.h>
#include <stdlib.h>

/*Faça  uma  função  que  retorne  o  ponteiro  para  um  vetor  de  N  elementos  inteiros 
alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.*/


/*conqueror = conquistador em portugues*/
int *vetorAlocado(int tamanho)
  {
  int *p1Conqueror = (int *)calloc(tamanho, sizeof(int));

  if(p1Conqueror == NULL)
      return NULL;

  for(int i = 0; i < tamanho - 1; ++i)
    {
    *(p1Conqueror + i) = i;
    }

  return p1Conqueror;
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

  puts("## ELEMENTOS DO VETOR ##");
  for(int i = 0; i < tam - 1; ++i)
    {
    printf("Valor na posicao[%d] = %d\n", i, *(getVetor + i));
    }

  free(getVetor);
  getVetor = NULL;
  return (0);
  }