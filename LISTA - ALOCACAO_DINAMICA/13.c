#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um inteiro N e crie uma matriz alocada
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor −1 nos
elementos abaixo da diagonal principal*/

int** criarMatriz(int valor)
    {
    int **matriz = (int **)calloc(valor, sizeof(int *));

    if(matriz == NULL)
        return NULL;

    for(int i = 0; i < valor; ++i)
        {
        matriz[i] = (int *)calloc(valor, sizeof(int));

        if(matriz[i] == NULL)
            return NULL;
        }

    
    for(int i = 0; i < valor; ++i)
        {
        for(int j = 0; j < valor; ++j)
            {
            if(i == j)
                {
                matriz[i][j] = 0;
                }
            else if(i < j)
                {
                matriz[i][j] = 1;
                }
            else if(i > j)
                {
                matriz[i][j] = -1;
                }
            }
        }
    return matriz;
    }



int main()
    {
    int valor = 0;
    int **getMatriz;

    printf("Digite um valor inteiro para uma matriz: ");
    scanf("%d", &valor);

    getMatriz = criarMatriz(valor);

    for(int i = 0; i < valor; ++i)
        {
        for(int j = 0; j < valor; ++j)
            {
            printf("%2d  ", getMatriz[i][j]);
            }
        printf("\n");
        }
    
    for(int i = 0; i < valor; ++i)
        {
        free(getMatriz[i]);
        }


    free(getMatriz);
    getMatriz = NULL;

    return (0);
    }