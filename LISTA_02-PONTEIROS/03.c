#include <stdio.h>
#include <stdlib.h>

/*) Uma matriz bidimensional em C é armazenada na memória como um vetor contínuo. 
-Declare uma matriz int matriz[3][3] e preencha-a com valores de 1 a 9. 
-Crie um ponteiro simples int *ptr = &matriz[0][0]; 
-Utilizando  apenas  este  ponteiro  simples  e  aritmética  de  ponteiros  (ou  seja, 
proibido  usar  laços  aninhados  com  índices  [i][j]),  percorra  os  9  elementos  na 
memória e calcule a soma apenas dos elementos da diagonal principal. 
Dica: A diagonal principal ocorre em saltos regulares de memória. */

int calcularDiagonal(int **ptr2)
  {
  int somaTotal = 0;
  for(int i = 0; i < 3; ++i)
    {
    somaTotal += *(*ptr2 + (i * 3 + i));
    }

    return somaTotal;
    }

int main()
  {
  int matriz[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};

  int *ptr = &matriz[0][0];
  int getCalcularDiagonal = 0;

  getCalcularDiagonal = calcularDiagonal(&ptr);

  printf("A soma da diagonal principal eh: %d\n", getCalcularDiagonal);
  return (0);
  }