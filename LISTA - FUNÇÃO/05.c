#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito 
quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 
6  =  1  +  2  +  3,  que  são  seus  divisores).  A  função  deve  retornar  o  valor  inteiro  1  para 
verdadeiro e 0 caso contrário. */

bool verificarNumero(int numero)
  {
  int somarDivisores = 0;

  if(numero < 0)
    numero *= -1;


  printf("[");
  for(int i = 1; i <= numero / 2; ++i)
    {
    if(numero % i == 0)
      {
      somarDivisores += i;
      if(i == numero / 2)
        printf(" %d", i);
      else
        printf(" %d +", i);
      }
    }

  if(somarDivisores == numero)
    {
    printf("] = %d\n", somarDivisores);
    return true;
    }
  printf("] == %d\n", somarDivisores);
  return false;
  }

int main()
  {
  int numero = 0;
  int numeroPerfeito = 0;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(verificarNumero(numero))
    {
    printf("Seu numero --> %d e perfeito.\n", numero);
    } 
  else
    {
    printf("Seu numero --> %d nao eh perfeito.\n", numero);
    }
  return (0);
  }