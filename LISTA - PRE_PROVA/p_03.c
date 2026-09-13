#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros*/

char preencherVetor(char *p1, char letra)
    {
    for(int i = 0; i < 10; ++i)
        {
        *(p1 + i) = letra;
        }
    return *p1;
    }



int main()
    {
    char vet[10];
    char letra;
    char getLetra;

    printf("Digite uma letra qualquer: ");
    scanf("%c" , &letra);

    getLetra = preencherVetor(vet, letra);

    printf("[ ");
    for(int i = 0; i < 10; ++i)
        {
        printf("%c ", getLetra);
        }
    printf("]");
    return (0);
    }