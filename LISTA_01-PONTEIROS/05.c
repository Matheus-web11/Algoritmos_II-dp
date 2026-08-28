#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
de cada valor lido.*/

void ExibirVetor(int **p2)
    {
    for(int j = 0; j < 5; ++j)
        {
        printf("O valor, no indice[%d] = %d\n", j, *(*p2 + j));
        }
    }

int main()
    {
    int vet[5];
    int getValoresVetor = 0;
    int *p1 = vet;

    puts("Digite 5 numeros inteiros.");

    for(int i = 0; i < 5; ++i)
        {
        printf("Elemento [%d] = ", i);
        scanf("%d", &p1[i]);
        }
    for(int i = 0; i < 5; ++i)
        {
        *(p1 + i) = *(p1 + i) * 2;
        }

    ExibirVetor(&p1); 

    return (0);
    }