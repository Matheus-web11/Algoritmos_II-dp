#include <stdio.h>
#include <stdlib.h>

void ExibirVetor(int *p1, int valorVetor)
    {  
    for(int i = 0; i < 5; ++i)
        {
        *(p1 + i) = valorVetor;
        }
    for(int i = 0; i < 5; ++i)
        {
        printf("[%d]\n", *(p1 + i));
        }
    }

int main()
    {
    int vet[5];
    int valorVetor = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &valorVetor);

    ExibirVetor(vet, valorVetor);

    return (0);
    }