#include <stdio.h>
#include <stdlib.h>

/* Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos 
elementos de um vetor original. -Você deve criar dois ponteiros locais dentro da função: um inicio apontando 
para o primeiro elemento e um fim apontando para o último. 
Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de 
lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis 
inteiras como índice. */

void inverte_vetor(int *vetor, int tamanho)
    {
    int *p1_inicio = vetor;
    int *p1_final = vetor + (tamanho - 1);
    int aux = 0;

    while(p1_inicio != p1_final)
        {
        aux = *p1_inicio;
        *p1_inicio = *p1_final;
        *p1_final = aux;

        p1_inicio++;
        p1_final--;


       // *p1_inicio = *p1_final;
        //p1_inicio++;
        //p1_final--;
        
        if(p1_inicio == p1_final)
            {
            printf("Os ponteiros se encontraram.\n");
            break;
            }
        }
    }

int main()
    {
    int tamanho = 5;
    int vet[tamanho];

    for(int i = 0; i < tamanho; ++i)
        {
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);
        }
    inverte_vetor(vet, tamanho);

    printf("[");
    for(int i = 0; i < tamanho; ++i)
        {
        printf(" %d ", vet[i]);
        }
    printf("]");
    return (0);
    }
