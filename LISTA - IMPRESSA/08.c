#include <stdio.h>
#include <stdlib.h>

/*Questão 8: Números Primos
Crie uma função chamada eh_primo(n) que retorna True ou 1 se um número for primo e False ou 0 caso contrário.
No programa principal, peça ao usuário um intervalo (um número inicial e um final). Use um laço de repetição para percorrer esse intervalo e, para cada número, chame a função. Ao final, o programa deve exibir apenas:
A soma de todos os números primos encontrados no intervalo.
Qual foi o maior número primo encontrado.*/

int main()
  {
  int valorInicial = 0, valorFinal = 0;
  int i = 0, somaDosPrimos = 0;
  int maiorPrimo = 0;

  printf("Digite um intervalo de numeros. (ex: 3 ate 9).\n");

  printf("Valor inicial: ");
  scanf("%d", &valorInicial);

  while(valorInicial < 2)
    {
    printf("Por favor digite um valor inicial maior que 2.\n");
    printf("Valor inicial: ");
    scanf("%d", &valorInicial);
    }

  printf("\n");

  printf("Valor final: ");
  scanf("%d" , &valorFinal);

  while(valorInicial > valorFinal)
    {
    printf("Valor inicial deve ser menor que o valor final.\n");
    printf("Valor final: ");
    scanf("%d" , &valorFinal);
    }

  for(i = valorInicial; i <= valorFinal; ++i)
    {
    int valorPrimo = 1;//eu assumo que o valor ja e primo(pedido do exercicio)
    if(i < 2)
      {
      valorPrimo = 0;//eu sei que o numero NAO e primo
      }
    else //ele passou no teste, valorPrimo ainda é = 1, entao agora vamos verificar se o numero e primo
      {
      for(int j = 2; j * j <= i; ++j)
        {
        if(i % j == 0)/*se o valor divido por um numero que de resto 0, ele NAO e primo, ou seja,
        mudamos o valorPrimo para 0(false)*/
          {
          valorPrimo = 0;
          break;
          }
        }
      }

      if(valorPrimo)
        {
        somaDosPrimos += i;
          
        if(i > maiorPrimo)
        {
        maiorPrimo = i;
        }
      }
    }
    
  printf("Soma dos primos: %d\n" , somaDosPrimos);
  printf("Maior numero primo encontrado: %d" , maiorPrimo);
  return (0);
  }

