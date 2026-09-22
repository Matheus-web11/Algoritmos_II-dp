#include <stdio.h>
/*
Faça uma função  que  recebe  a  idade  de  uma pessoa em  anos,  meses  e  dias  e  retorna 
essa idade expressa em dias
*/

int calcularIdade(int idadeAnos, int idadeMeses, int Dias)
  {
  return ((idadeAnos * 365) + (idadeMeses * 30) + Dias);
  }

int main()
  {
  int idadeAnos = 0, idadeMeses = 0, idadeDias = 0;
  int mostrarIdade = 0;

  printf("Digite sua idade em anos: ");
  scanf("%d" , &idadeAnos);

  printf("Digite sua idade em meses: ");
  scanf("%d" , &idadeMeses);

  printf("Digite sua idade em dias: ");
  scanf("%d" , &idadeDias);

  mostrarIdade = calcularIdade(idadeAnos, idadeMeses, idadeDias);

  printf("Sua idade em dias eh: %d", mostrarIdade);

  return (0);
  }
