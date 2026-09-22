#include <stdio.h>
#include <stdlib.h>

/*  Escreva  uma  função  que  receba  um  vetor  de  inteiros,  seu  tamanho  e  um  número  X 
(informado pelo usuário). A função deve buscar X no vetor e retornar um ponteiro para 
a primeira posição de memória onde X foi encontrado. 
-Se X não estiver no vetor, a função deve retornar NULL. 
-Apresente o resultado na main.*/

int* receberFuncao(int *v, int tam_vetor, int numeroEscolhido)
  {
  for(int i = 0; i < tam_vetor; ++i)
    {
    if(*(v + i) == numeroEscolhido)
      {
      printf("Numero encontrado: %d\n", *(v + i));
      return v;
      }
    else
      {
      printf("Valor nao encontrado.\n");
      }
    }
  return v = NULL;
  }



int main()
  {
  int tam_vetor = 0;
  int numeroEscolhido = 0;
  int *getFuncao = 0;

  printf("Escolha um tamanho para um vetor: ");
  scanf("%d", &tam_vetor);
  
  int vet[tam_vetor];

  for(int i = 0; i < tam_vetor; ++i)
    {
    vet[i] = i + 1;
    }
  
  puts("Digite o numero que gostaria de achar no vetor");
  printf("--> ");
  scanf("%d", &numeroEscolhido);

  getFuncao = receberFuncao(vet, tam_vetor, numeroEscolhido);


  return (0);
  }
