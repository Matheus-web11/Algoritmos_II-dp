#include <stdio.h>
#include <stdlib.h>

int somarNumeros(int numeros)
  {
  int somaTotal = 0;
  int i = 0;

  for(int i = 0; i <= numeros; ++i)
    {
    somaTotal += i;
    }
  printf("A soma total de numeros de %d ate %d eh: %d", i, numeros, somaTotal);
  return somaTotal;
  }

int main()
  {
  int numero = 0;
  int getSomaNumeros = 0;

  printf("---SOMA DE N NUMEROS.\n");

  printf("Digite um numero: ");
  scanf("%d" , &numero);

  getSomaNumeros = somarNumeros(numero);

  return (0);
  }
