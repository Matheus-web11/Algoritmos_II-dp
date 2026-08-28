#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares.*/

void MostrarEnderecos(int *p1)
    {
    for(int i = 0; i < 5; ++i)
        {
        if(*(p1 + i) % 2 == 0)
            {
            printf("&v[%d] = %p\n", i, (p1 + i));
            }
        else
            {
            printf("O conteudo nao eh par.\n");
            }      
        }      

    }


int main()
    {
    int vet[5];

    puts("Digite 5 elementos de um vetor.");

    for(int i = 0; i < 5; ++i)
        {
        printf("Elemento[%d] = " , i);
        scanf("%d", &vet[i]);
        }

MostrarEnderecos(vet);


    return 0;
    }