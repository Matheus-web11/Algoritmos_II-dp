#include <stdio.h>
#include <stdlib.h>

/* Crie uma função que varra um vetor de inteiros uma única vez e retorne três 
informações simultaneamente (Devem ser apresentadas na Main). -Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, 
float *media); -O main deve passar um vetor e os endereços das variáveis onde os resultados 
serão armazenados. Toda a varredura do vetor deve ser feita via aritmética de 
ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar). */

void Extrair_Estatisticas(int *vetor, int tamanho, int *min, int *max, float *media)
    {
    *min = *(vetor + 0);
    for(int i = 0; i < tamanho; ++i)
        {
        if(*(vetor + i) < *min)
            {
            *min = *(vetor + i);
            }
        else if(*(vetor + i) > *max)
            {
            *max = *(vetor + i);
            }
        *media += (float)*(vetor + i) / tamanho;
        }
    }

int main()
    {
    int tamanho = 5;
    int vet[5] = {40, 2, 90, 88, 55};
    int min = 0, max = 0;
    float media = 0.0f;

    Extrair_Estatisticas(vet, tamanho, &min, &max, &media);
    
    printf("A media dos valores eh: %.2f\n", media);
    
    printf("O menor valor eh: %d\n", min);
    printf("O maior valor eh: %d\n", max);
    return 0;
    }