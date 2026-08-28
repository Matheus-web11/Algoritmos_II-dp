#include <stdio.h>

/*Questão 1: Média Salarial
Foi feita uma pesquisa com n trabalhadores na cidade de Três Lagoas para saber a média salarial de uma determinada região da cidade. Faça um programa em C que receba o salário desses n
trabalhadores, calcule a média salarial e apresente-a na tela.*/

int main()
  {
  int qntTrabalhador;
  int mediaSalarial = 0;
  printf("Digite a qnt de trabalhadores: ");
  scanf("%d" , &qntTrabalhador);

  int salarioTrabalhador[qntTrabalhador];

  for(int i = 0; i < qntTrabalhador; ++i)
    {
    printf("Digite o salario do trabalhador %d: ", i+1);
    printf("--> ");
    scanf("%d" , &salarioTrabalhador[i]);
    }

  for(int i = 0; i < qntTrabalhador; ++i)
    {
    mediaSalarial += salarioTrabalhador[i] / qntTrabalhador;
    }

  printf("A media de salarios dos trabalhadores eh: %d", mediaSalarial);

  return (0);
  }