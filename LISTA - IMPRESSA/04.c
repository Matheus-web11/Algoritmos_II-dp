#include <stdio.h>
#include <stdlib.h>


/*Questão 4: Idade Nadador
Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna,
também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:
---Categoria---- por idade.
Infantil A --> 5 a 7 anos
Infantil B --> 8 a 10 anos
Juvenil A --> 11 a 13 anos
Juvenil B --> 14 a 17 anos
Maiores de 18 anos (inclusive) --> Adulto*/

int main()
  {
  int idadeNadador = 0;

  printf("--------GRUPO NATACAO-------\n");
  printf("Digite a idade do Nadador: ");
  scanf("%d" , &idadeNadador);

  if((idadeNadador >= 5) && (idadeNadador <= 7))
    { 
    printf("Aluno apto a participar da Categoria: INFANTIL A\n");
    }

  if((idadeNadador >= 8) && (idadeNadador <= 10))
    { 
    printf("Aluno apto a participar da Categoria: INFANTIL B\n");
    }

  if((idadeNadador >= 11) && (idadeNadador <= 13))
    { 
    printf("Aluno esta apto a participar da Categoria: JUVENIL A\n");
    }

  if((idadeNadador >= 14) && (idadeNadador <= 17))
    { 
    printf("Aluno esta apto a participar da Categoria: JUVENIL B\n");
    }

  if(idadeNadador >= 18)
    { 
    printf("Aluno esta apto a participar da Categoria: ADULTO\n");
    }
  if(idadeNadador < 5)
    {
    printf("Nao e permitido aluno com idade inferior a 5 anos\n");
    }
  return (0);
  }