#include <stdio.h>
#include <stdlib.h>

/*  Implemente  um  algoritmo  de  ordenação  simples  (como  Bubble  Sort)  para  um  vetor 
de inteiros usando ponteiros. 
-A lógica que inverte dois elementos de lugar não pode estar dentro da função de 
ordenação. Crie uma função auxiliar void swap(int *a, int *b). 
-O  algoritmo  principal  deve  percorrer  o  vetor  usando  ponteiros,  e  sempre  que 
dois valores precisarem ser invertidos, seus endereços devem ser enviados para a 
função swap*/

void swap(int *a, int *b);

int ordenarVetor(int *p1)
  {
  for(int i = 0; i < 5; ++i)
    {
    for(int j = 0; j < 5 - 1; ++j)
      {
      if(*(p1 + j) > *(p1 + j + 1))
        {
        swap(p1 + j, p1 + j + 1);
        }
      }
    }
  return *p1;
  }

void swap(int *a, int *b)
  {
  int aux = 0;

    aux = *a;
    *a = *b;
    *b = aux;
  }

void mostrarVetor(int *p2)
  {
  for(int i = 0; i < 5; ++i)
    {
    printf("%d " , *(p2 + i));
    }


  }

int main()
  {
  int vet[5] = {10, 20, 60, 2, 3};
  int getVetor = 0;
  //int a, b;

  getVetor = ordenarVetor(vet);
  mostrarVetor(vet);
  return (0);
  }