#include <stdio.h>
#include <stdlib.h>

/* Crie uma função que receba 3 valores inteiros por parâmetro e retorne o maior deles. 
Em seguida, no programa principal, exiba o valor retornado na tela.*/

void ordenarNumeros(int *p1)
  {
  int aux = 0;

  for(int i = 0; i < 3 - 1; ++i)
    {
    for(int j = 0; j < 3 - 1 - i; ++j)
      {
      if(*(p1 + j) > *(p1 + j + 1))
        {
        aux = *(p1 + j);
        *(p1 + j) = *(p1 + j + 1);
        *(p1 + j + 1) = aux;
        }
      }
    }
  }

int main()
  {
  int numeros[3];
  puts("## DIGITE TRES VALORES ##");

  for(int i = 0; i < 3; ++i)
    {
    printf("Valor %d: ", i + 1);
    scanf("%d", &numeros[i]);
    }

  ordenarNumeros(numeros);

  printf("O maior valor eh: %d\n", numeros[2]);
  return (0);
  }