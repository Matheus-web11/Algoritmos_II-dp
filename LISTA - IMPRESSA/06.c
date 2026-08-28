#include <stdio.h>
#include <stdlib.h>

/*Questão 6: Simulador de Tanque de Combustível
Crie uma função chamada calcular_autonomia que recebe a capacidade do tanque (em litros) e o consumo médio do veículo (km/l). A função deve calcular quantos quilômetros o carro percorre.
No
programa principal, use um laço de repetição para permitir que o usuário faça vários cálculos seguidos. Dentro do laço, use uma estrutura condicional para verificar se a autonomia é "Alta" (acima de 500km) ou
"Baixa" (500km ou menos). O laço deve parar se o usuário digitar O para a capacidade do tanque.*/

int main()
  {
  int capacidadeTanque = 0;
  int kmAntes = 0, kmDepois = 0, kmRodadoTotal = 0;
  float consumoMedio = 0.0;

  do
    {
    printf("Digite a capacidade maxima do tanque do carro em (LITROS)\n ou digite (0) para sair: ");
    scanf("%d" , &capacidadeTanque);

    if(capacidadeTanque == 0)
      {
      printf("Teste Concluido.\n");
      break;
      }

    printf("Diga a kilometragem antes de percorrer com o carro: ");
    scanf("%d" , &kmAntes);

    printf("Diga a kilometragem depois de percorrer com o carro:  ");
    scanf("%d" , &kmDepois);

    kmRodadoTotal = kmDepois - kmAntes;/*conversao explicita para float,
                                              ja que e subtracao  e de variaveis inteiras*/
    printf("Kilometragem total rodado: %d km.\n" , kmRodadoTotal);

    consumoMedio = (float)kmRodadoTotal / capacidadeTanque;
    printf("Consumo medio (km/l): %.2f\n" , consumoMedio);

   if(kmRodadoTotal > 500)
      {
      printf("Autonomia alta.\n--> %.2f", consumoMedio);
      }
    else
      {
      printf("Autonomia baixa.\n--> %.2f", consumoMedio);
      }
    
    printf("\n-----------------------------------\n");


    }while(capacidadeTanque != 0);

  return (0);
  }
