#include <stdio.h>
#include <stdlib.h>

/*Questão 10 - O Caixa Eletrônico Inteligente
Crie um programa que simule um saque. O usuário informa o valor que deseja sacar (inteiro). O programa deve calcular quantas notas de 50, 20 e 10 serão entregues, priorizando sempre as notas maiores.
Desafio: Se sobrar um valor que não pode ser pago com essas notas (ex: R$ 7,00), o programa deve avisar que o valor é inválido para as cédulas disponíveis.
Regra: Use apenas operadores de divisão inteira (//) e resto (%).*/

int main()
  {
  int dinheiroSaque = 0.0;
  int notas[3] = {50, 20, 10};
  int valorSobrado = 0, valorSobrado2= 0, valorSobrado3 = 0;
  int totalNota_50 = 0, totalNota_20 = 0, totalNota_10 = 0;

  do{
  printf("-------------BANCO PAPER----------------..\n");

  printf("Digite o valor que deseje sacar: ");
  scanf("%d" , &dinheiroSaque);

  totalNota_50 = dinheiroSaque / notas[0];//ve o total de notas de 50 que sao guardados no valor do dinheiroSaque
  valorSobrado = dinheiroSaque % notas[0];//pega o resto da divisao

  totalNota_20 = valorSobrado / notas[1];//ve o total de notas de 20  que sao guardados no valor do dinheiroSaque
  valorSobrado2 = valorSobrado % notas[1];//pego o valor do valorSobrado e divido pelo 20

  totalNota_10 = valorSobrado2 / notas[2];//ve o total de notas de 10 que sao guardados no valor do dinheiroSaque
  valorSobrado3 = valorSobrado2 % notas[2];//ve o valor do valorSobrado2 e divide pelo 10, e da a sobra para o valorSobrado3
      
  if(valorSobrado3 > 0)
    {
    printf("Nao temos cedulas disponiveis para realizar o saque solicitado.\n--->Tente outro valor<---\n");
    }
  }while(valorSobrado3 > 0);/*se o resto for maior que 0, eu sei
  que e um numero quebrado, ou seja, nao tenho cedulas para depositar para o cliente*/

  printf("(---Total sacado: %d---)\n(---Total de notas de %d: %d---)\n(---Total de notas de %d: %d---)\n(---Total de notas de %d: %d---)\n ", dinheiroSaque, notas[0], totalNota_50, notas[1], totalNota_20, notas[2], totalNota_10);

  return (0);
  }