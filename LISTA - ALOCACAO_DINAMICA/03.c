#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e
retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa
estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função.*/

#define N 3

struct Cadastro
    {
    char nome[30];
    int idade;
    char endereco[30];
    };

struct Cadastro* dadosVetor(int tamanho)
    {
    //aponta para o inicio / primeiro elemento. do espaco da memoria alocada
    struct Cadastro *p1 = (struct Cadastro*)calloc(tamanho, sizeof(struct Cadastro));

    if(p1 == NULL)
        return 1;

    for(int i = 0; i < tamanho; ++i)
        {
        printf("Nome[%d]: ", i + 1);
        fgets(p1[i].nome, 30, stdin);

        printf("Idade[%d]: ", i + 1);
        scanf("%d", &p1[i].idade);

        setbuf(stdin, NULL);

        printf("Endereco[%d]: ", i + 1);
        fgets(p1[i].endereco, 30, stdin);


        printf("\n");
        }

    /*aqui retorna o endereco de onde a alocacao(linha 21) esta na memoria*/
    return p1;
    }

int main()
    {
    puts("## PREENCHA OS DADOS ##\n");

    struct Cadastro* getVetor;

    /*o ponteiro e referenciado com o endereco do espaco alocado*/
    getVetor = dadosVetor(N);

    puts("## EXIBINDO OS DADOS ##");

    for(int i = 0; i < N; ++i)
        {
        printf("Nome[%d]: %s\tIdade[%d]: %d\tEndereco[%d]: %s\t\n", i + 1, getVetor[i].nome, i + 1, getVetor[i].idade, i + 1, getVetor[i].endereco);
        }

    free(getVetor);
    getVetor = NULL;
    return (0);        
    }