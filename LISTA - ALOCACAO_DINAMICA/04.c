#include <stdio.h>
#include <stdlib.h>

/*elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.*/


int main()
    {
    puts("## CRIANDO VETOR ##");

    int tamanho;
    int *getVetor;

    printf("Digite um valor de tamanho para um vetor.\n");
    printf("Tamanho: ");
    scanf("%d", &tamanho);

    int *p1 = (int *)calloc(tamanho, sizeof(int));

    if(p1 == NULL)
        return 1;
    
    puts("## PREENCHA O VETOR ##");
    for(int i = 0; i < tamanho; ++i)
        {
        printf("Valor %d: ", i + 1);
        scanf("%d", &p1[i]);
        }   

    puts("## O VETOR PREENCHIDO ##");

    printf("[ ");
    for(int i = 0; i < tamanho; ++i)
        {
        printf("%d ", *(p1 + i));
        }
    printf("] ");

    free(p1);
    p1 = NULL;
    return (0);
    }