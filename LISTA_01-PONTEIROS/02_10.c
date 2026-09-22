#include <stdio.h>

/*Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo.*/

void calcularProcesso(int *b)
  {
  int **c = &b;
  int ***d = &c;

  printf("Valor de A: %d\nDobro: %d\nTriplo: %d\nQuadruplo: %d\n", *b, *b * 2, **c * 3, ***d * 4);
  }

int main()
  {
  int a;
  printf("Digite um numero: ");
  scanf("%d", &a);

  calcularProcesso(&a);

  return (0);
  }
