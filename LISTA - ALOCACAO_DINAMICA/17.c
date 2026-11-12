#include <stdio.h>
#include <stdlib.h>

/*) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e 
N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N alocado 
dinamicamente, em que cada posição de B é a soma dos números daquela coluna da 
matriz. */

int *createVetor(int matriz[][3])
    {
    int *vetorB = (int *)calloc(3, sizeof(int));
    if(vetorB == NULL)
        return NULL;


    /*aquia a ordem muda, O PRIMEIRO LACO E DAS COLUNAS. O SEGUNDO DA LINHA. ENTAO QUANDO A CONTAGEM DE COLUNA COMECA
    ELE VE A DA PRIMEIRA LINHA, SEGUNDA E TERCEIRA, AINDA COM J = 0.
    OU SEJA, ELE FAZ [0][0]; [1][0]; [2][0]... E ASSIM POR DIANTE*/
    for(int j = 0; j < 3; ++j)
        {
        for(int i = 0; i < 3; ++i)
            {
            *(vetorB + j) += matriz[i][j]; 
            }
        }
    
    return vetorB;
    }

int main()
    {
    int matriz[3][3] = {{20,32,12},
                        {25,22,11},
                        {41,67,10}};

    int *getVetor;

    getVetor = createVetor(matriz);

    puts("## VETOR B ##");

    printf("[ ");
    for(int i = 0; i < 3; ++i)
        {
        printf("%d ", *(getVetor + i));
        }
    printf("]");

    free(getVetor);
    getVetor = NULL;

    return (0);
    }