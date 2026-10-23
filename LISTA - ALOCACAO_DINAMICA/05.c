#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em
seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser
maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.*/

int main()
    {
    int vlr;

    printf("Digite um valor inteiro positivo.\n");
    printf("Valor: ");
    scanf("%d", &vlr);

    while((vlr < 0) || (vlr == 0))
        {
        printf("Por favor, digite um valor positivo.\n");
        printf("Valor: ");
        scanf("%d", &vlr);
        }

    
    int *p1 = (int *)calloc(vlr, sizeof(int));

    puts("## PREENCHA O VETOR ##\n --> COM VALORES MAIORES OU IGUAL A 2. <--");

    for(int i = 0; i < vlr; ++i)
        {
        printf("Valor %d: ", i + 1);
        scanf("%d", &p1[i]);

        while(*(p1 + i) < 2)
            {
            printf("Por favor, digite valores maiores ou igual a 2.\n");
            printf("Valor %d: ", i + 1);
            scanf("%d", &p1[i]);
            }   
        }

    puts("## VETOR PREENCHIDO ##");
    printf("[ ");
    for(int i = 0; i < vlr; ++i)
        {
        printf("%d ", *(p1 + i));
        }
    printf("]");

    free(p1);
    p1 = NULL;
    return (0);
    }