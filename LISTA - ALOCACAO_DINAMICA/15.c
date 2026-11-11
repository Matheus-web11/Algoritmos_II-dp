#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N
cada. A função deve retornar o ponteiro para um vetor C de tamanho N alocado
dinamicamente, em que C[i] = A[i] * B[i]*/


#define size_vetAB 5

int *createVetorC(int *p_A, int *p_B)
    {
    int *p_C = (int *)calloc(size_vetAB, sizeof(int));

    if(p_C == NULL)
        return NULL;
        
    for(int i = 0; i < size_vetAB + size_vetAB; ++i)
        {
        *(p_C + i) = *(p_A + i) * *(p_B + i);
        }

    return p_C;
    }


int main()
    {
    int vetA[size_vetAB], vetB[size_vetAB];
    int *getVetorC;

    puts("## DIGITE OS ELEMENTOS DOS VETORES ##");

    printf("--> VETOR A <--\n");
    
    for(int i = 0; i < size_vetAB; ++i)
        {
        printf("Valor[%d]: ", i + 1);
        scanf("%d", &vetA[i]);
        }

    printf("\n--> VETOR B <--\n");

    for(int i = 0; i < size_vetAB; ++i)
        {
        printf("Valor[%d]: ", i + 1);
        scanf("%d", &vetB[i]);
        }


    getVetorC = createVetorC(vetA, vetB);

    puts("## --> VETOR C <-- ##");

    printf("[ ");
    for(int i = 0; i < size_vetAB; ++i)
        {
        printf("%d ", *(getVetorC + i));
        }

    printf("]");
    free(getVetorC);
    getVetorC = NULL;

    return (0);
    }