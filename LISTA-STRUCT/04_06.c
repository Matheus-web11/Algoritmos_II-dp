#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

struct Atleta
    {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
    };

int MaiorAltura(struct Atleta *p1)
    {
    int maiorAltura = 0;

    for(int i = 1; i < 5; ++i)
        {
        if(p1[i].altura > p1[maiorAltura].altura)
            {
            maiorAltura = i;
            }   
        }
    return maiorAltura;
    }



int MenorAltura(struct Atleta *p1)
    {
    int menorAltura = 0;

    for(int i = 0; i < 5; ++i)
        {
        if(p1[i].altura < p1[menorAltura].altura)
            {
            menorAltura = i;
            }
        }
    return menorAltura;
    }


int main()
    {
    struct Atleta atletas[5];
    int getMaiorAltura = 0;
    int getMenorAltura = 0;

    puts("## DADOS DE 5 ATLETAS ##");   
    printf("{  1.Nome\n  2.Esporte\n  3.Idade\n  4.Altura  }\n");
 
    for(int i = 0; i < 5; ++i)
        {
        printf("-> ATLETA %d <-\n", i + 1);
        printf("Nome: ");
        fgets(atletas[i].nome, 50, stdin);
        printf("Esporte: ");
        fgets(atletas[i].esporte, 30, stdin);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
        setbuf(stdin, NULL);
        }      

    puts("## O MAIOR ATLETA ##");
    getMaiorAltura = MaiorAltura(atletas);
    printf("Nome: %s", atletas[getMaiorAltura].nome);
    printf("Altura: %.2f\n", atletas[getMaiorAltura].altura);

    puts("\n## O MENOR ATLETA ##");
    getMenorAltura = MenorAltura(atletas);
    printf("Nome: %s", atletas[getMenorAltura].nome);
    printf("Altura: %.2f\n", atletas[getMenorAltura].altura);


    return (0);
    }
