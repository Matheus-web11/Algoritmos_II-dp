#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor 
maior. 
-Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s); 
A  função  deve  procurar  se  a  sequência  exata  de  números  do  vetor  sub  existe 
dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa 
ocorrência no vetor original. Se não encontrar, retorne NULL.*/

int* busca_vetor(int *vetor, int tam_v, int *sub, int tam_s)
  {
  int j = 0;
  if(tam_s > tam_v)
    {
    return 0;
    }

  /*i vai apenas ate a ultima posicao onde o subvetor ainda cabe*/
  /*a sutracao faz com que ele comeca a verificar se os numeros sao iguais apartir
  do segundo elemento do vetor Original, e vai comparando com o subvetor*/
  for(int i = 0; i <= tam_v - tam_s; ++i)
    {
    for(j = 0; j < tam_s; ++j)
      {
      if(*(vetor + i + j) != *(sub + j))
        {
        break;
        }
      }
    if(j == tam_s)
      {
      return vetor + i;
      }
    }
  return NULL;
  }

int main()
  {
  int vetOriginal[6] = {4, 3, 30, 60, 90, 20};
  int vetSub[3] = {30, 60, 90};
  int tam_vet_original = 5, tam_vet_sub = 3;
  int *getBuscaVetor = NULL;

  getBuscaVetor = busca_vetor(vetOriginal, tam_vet_original, vetSub, tam_vet_sub);

  puts("## SEQUENCIA ENCONTRADA ##");
  if(getBuscaVetor != NULL)
    {
    for(int k = 0; k < tam_vet_sub; ++k)
      {
      printf("%d ", getBuscaVetor[k]);
      }
    }
 
  return (0);
  }