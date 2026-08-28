#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha uma matriz de float com três linhas e três colunas.
Imprima o endereço de cada posição dessa matriz.*/



int main()
    {
    float matriz[3][3];

    float *p1 = &matriz[0][0];

    for(int i = 0; i < 3; ++i)
        {
        for(int j = 0; j < 3; ++j)
            {   
            printf("Endereco do [%d][%d] elemento: %p\n", i, j, (p1 + (i *3) + j));
            /*ESCREVENDO A LINHA:
            P1 = ENDERECO INICIAL DA MATRIZ[0][0]*/
            }
        }

    return (0);
    }