#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e 
N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para um 
vetor C de tamanho N alocado dinamicamente, em que C é o produto da matriz A pelo 
vetor B. */

int* createVetC(int p1_matriz[][3], int *p1_vet)
    {
    /*matriz[][3] -> o compilador so precisa do numero de colunas, assim, ele sabe quando parar e
    ir para proxima linha.*/
    int *p1_vetC = (int *)calloc(3, sizeof(int));
    if(p1_vetC == NULL)
        return NULL;

    for(int i = 0; i < 3; ++i)
        {
        for(int j = 0; j < 3; ++j)
            {
            *(p1_vetC + i) += p1_matriz[i][j] * *(p1_vet + j);
            }
        }

    /*O PROCESSO EH: MULTIPLICA O VALOR DO VETOR COM OS ELEMENTOS DA LINHA TODA DA MATRIZ.
    OS RESULTADOS DESSAS MULTIPLICACOES SAO SOMADOS*/
    return p1_vetC;
    }




int main()
    {
    int matriz[3][3] = {{2,5,6},
                        {4,7,10},
                        {6,8,9}};

    int vet[3] = {21,33,11};

    int *getVetC;

    getVetC = createVetC(matriz, vet);


    puts("## VETOR C ##");

    printf("[ ");
    for(int i = 0; i < 3; ++i)
        {
        printf("%d ", *(getVetC + i));
        }
    printf("]");
    
    free(getVetC);
    getVetC = NULL;

    return (0);
    }