#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz
deve conter o valor 1 na diagonal secundária e 0 nas demais posições.*/

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
            if(i + j == valor - 1)
                {
                /*se a soma dos indices de linhas com colunas der igual ao tamanho da matriz - 1.
                o elemento esta na diagonal secundaria*/
                /*digonal secundaria*/
                matriz[i][j] = 1; /*LEMBRANDO: [i][j] aqui, sao as desreferenciação que fazemos
                so que de uma forma diferente de fazer, mas, continua sendo uma desreferenciação.*/
                }
            else
                {
                matriz[i][j] = 0;
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