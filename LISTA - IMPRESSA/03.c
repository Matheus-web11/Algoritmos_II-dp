#include <stdio.h>
#include <stdlib.h>

/*Questão 3: Tabuada
Faça um programa em C em que o usuário informe um número para calcular a sua tabuada.
Em seguida crie uma função que receba esse número por parâmetro, calcule e mostre a sua
tabuada conforme o exemplo abaixo:
2x1 = 2*/
int numeroTabuada = 0;

int main()
  {
  printf("---------TABUADA---------\n");

  printf("Digite o numero para a tabuada ser mostrada: ");
  scanf("%d" , &numeroTabuada);

  if(numeroTabuada > 0)
    {
    for(int i = 0; i <= 10; ++i)
      {
      int valorTabuada = numeroTabuada * i;
      printf("%d x %d = %d\n", numeroTabuada, i, valorTabuada);
      }

    }
  return (0);
  }