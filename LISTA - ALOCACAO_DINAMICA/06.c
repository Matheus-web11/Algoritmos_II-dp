#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que aloque dinamicamente uma matriz de inteiros. As
dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função que
receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso
contrário.*/


/*VARIAVEIS GLOBAIS, PARA A FUNCAO TER ACESSO AOS DADOS*/
int linhas, colunas;
int **matriz = NULL;



int verificarNumero(int valor)
    {
    for(int i = 0; i < linhas; ++i)
        {
        for(int j = 0; j < colunas; ++j)
            {
            if(matriz[i][j] == valor)
                {
                printf("O valor foi encontrado!.\nVALOR: %d\n", valor);
                return 1;
                }
            }
        }
    printf("O valor nao foi encontrado!\n");
    return 0;
    }


int main()
    {

    puts("## MATRIZ ##");

    printf("Digite um valor para linha da matriz: ");
    scanf("%d", &linhas);

    printf("Digite um valor para coluna da matriz: ");
    scanf("%d", &colunas);

    /*aloco a qnt de linhas da matriz*/
    /*SABEMOS que um pnt de pnt armazena enderecos de outros ponteiros, mas aqui no caso da alocacao, ele recebe
    como conteudo o endereco da alocacao feita. Aonde ela esta na memoria*/
    matriz = (int **)calloc(linhas, sizeof(int *));
    /*faco um ponteiro de ponteiro que recebe um endereco de memoria que la tem varios outros ponteiros
     e sera criado ponteiros para cada linha.*/

    if(matriz == NULL)
        return 1;

    for(int i = 0; i < linhas; ++i)
        {
        /*aloco cada coluna daquela linha especifica*/
        matriz[i] = (int *)calloc(colunas, sizeof(int));

        if(matriz[i] == NULL)
            return 1;
        }

    for(int i = 0; i < linhas; ++i)
        {
        for(int j = 0; j < colunas; ++j)
            {
            matriz[i][j] = (4 * i + j) * 2;
            }
        }

    puts("## VERIFICAR NUMERO NA MATRIZ ##");

    int nro = 0;

    printf("Digite um numero para ver se esta na matriz.\n");
    printf("Valor: ");
    scanf("%d", &nro);

    verificarNumero(nro);

    for(int i = 0; i < linhas; ++i)
        {
        for(int j = 0; j < colunas; ++j)
            {
            printf("Valor[%d][%d]: %d\n", i, j, matriz[i][j]);
            }
        }
    for(int i = 0; i < colunas; ++i)
        {
        /*desalocando cada coluna que tem na linha*/
        free(matriz[i]);
        }

    /*faz o ponteiro de ponteiro perder a referencia do endereco onde estava as linhas(vetor de ponteiros)*/
    free(matriz);
    matriz = NULL;

    return (0);
    }   