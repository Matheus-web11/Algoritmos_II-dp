#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne 
o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter 
os seus elementos preenchidos com certo valor, também passado por parâmetro. Se N 
for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/

int *alocarVetor(int tam, int elemento)
    {
    if(tam <= 0)
        {
        return NULL;
        }

    int *vetor = (int *)calloc(tam, sizeof(int));
    if(vetor == NULL)
        return NULL;

    for(int i = 0; i < tam; ++i)
        {
        *(vetor + i) = elemento;
        }

    return vetor;
    }



int main()
    {
    int tam, elemento;
    int *getVetor;
    printf("Digite um numero inteiro para o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Digite um valor que queira preencher esse vetor: ");
    scanf("%d", &elemento);

    getVetor = alocarVetor(tam, elemento);

    if(getVetor == NULL)
        {
        printf("O tamanho deve ser maior que 0.\n");
        return 0;
        }

    puts("## VETOR PREENCHIDO COM ##");

    printf("[ ");
    for(int i = 0; i < tam; ++i)
        {
        printf("%d ", *(getVetor + i));
        }
    printf("]");

    free(getVetor);
    getVetor = NULL;

    return (0);
    }