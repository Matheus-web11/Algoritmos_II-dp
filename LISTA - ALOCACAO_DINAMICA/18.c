#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus 
tamanhos. A função deve retornar o ponteiro para uma matriz C, em que C é o produto 
da multiplicação da matriz A pela matriz B. Se a multiplicação das matrizes não for 
possível, retorne um ponteiro nulo.*/

int *createMatriz(int matrizA[][3], int matrizB[][3])
    {
    int **p1_matriz = (int *)calloc(9, sizeof(int));
    if(p1_matriz == NULL)
        return NULL;

    for(int i = 0; i < 3; ++i)
        {
        for(int j = 0; j < 3; ++j)
            {
            if(matrizA[j] != matrizB[i])
                {
                return NULL;
                }
            *(p1_matriz + i) = matrizA[i][j] * matrizB[i][j];
            }
        }

    return p1_matriz;
    }


int main()
    {
    int matrizA[3][3] = {{21, 33, 45},
                        {12, 18, 52},
                        {77, 12, 9}};

    int matrizB[3][3] = {{14, 12, 22},
                        {31, 90, 89},
                        {3, 4, 9}};

    int *getMatriz;

    getMatriz = createMatriz(matrizA, matrizB);

    puts("## MATRIZ C ##");

    for(int i = 0; i < 3; ++i)
        {
        for(int j = 0; j < 3; ++j)
            {
            printf("%d ", *(getMatriz + i + j));
            }
        }

    free(getMatriz);
    getMatriz = NULL;

    return (0);
    }