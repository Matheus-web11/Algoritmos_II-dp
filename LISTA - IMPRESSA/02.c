#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Questão 2: Eleição
Supondo que em uma eleição presidencial tenha-se 3 candidatos, e que os votos são informados por meio do código de cada candidato, como o
informativo abaixo:
-
1, refere-se ao candidato cujo nome começa com a letra B;
2, refere-se ao candidato cujo nome começa com a letra K;
3, refere-se ao candidato cujo nome começa com a letra Z;
123, refere-se ao voto nulo;
0, refere-se ao voto em branco.
- No teste que será realizado haverá 20 pessoas que atuarão como eleitores.
Dessa forma, se faz necessário um programa para contabilizar os votos de cada candidato, além dos nulos e brancos.
Faça um algoritmo que calcule e escreva o total de votos de cada candidato, o total de votos nulos e o total de votos brancos.*/



int main()
  {
  int candidato1 = 0, candidato2 = 0, candidato3 = 0;
  int votoNulo = 0;
  int votoBranco = 0;

  int votoEleitor = 0;

  //int voto = 0;

  printf("----------------Apuracao De Votos---------------\n");

  printf("----Candidatos---\n");
  printf("Vote (1) para: B\n");
  printf("Vote (2) para: K\n");
  printf("Vote (3) para: Z\n");
  printf("Vote (123) para: Voto Nulo\n");
  printf("Vote (0) para: Voto em branco\n");
    
  for(int i = 0; i < 20; ++i)
    {
    printf("Eleitor %d vote: ", i + 1);
    scanf("%d" , &votoEleitor);
    printf("voto registrado.\n");

    if(votoEleitor == 1)
      {
      candidato1++;
      }
    if(votoEleitor == 2)
      {
      candidato2++;
      }
    if(votoEleitor == 3)
      {
      candidato3++;
      }
    if(votoEleitor == 123)
      {
      votoNulo++;
      }

    if(votoEleitor == 0)
      {
      votoBranco++;
      }
    }
  
  printf("----------Apuracao dos votos--------\n");

  printf("Candidato 1 = %d\nCandidato 2 = %d\nCandidato 3 = %d\nVotoNulo = %d\nVotoBranco = %d", candidato1, candidato2, candidato3, votoNulo, votoBranco);

  return (0);
  }
    