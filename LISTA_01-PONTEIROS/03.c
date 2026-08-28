#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float com 10 elementos. Imprima o
endereço de cada posição desse array.*/

int main()
    {
    float vet[10];
    float *p2 = vet;

    for(int i = 0; i < 10; ++i)
        {
        printf("Endereco da posicao[%d] = %p\n", i, &p2[i]);
        }


    return (0);
    }