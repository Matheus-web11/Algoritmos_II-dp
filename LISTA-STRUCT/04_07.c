#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Atleta
    {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
    };

int main()
    {
    struct Atleta atletas[5];

    puts("## DADOS DE 5 ATLETAS ##");   
    printf("{  1.Nome\n  2.Esporte\n  3.Idade\n  4.Altura  }\n");
 
    for(int i = 0; i < 5; ++i)
        {
        printf("-> ATLETA %d <-\n", i + 1);
        printf("Nome: ");
        fgets(atletas[i].nome, 50, stdin);
        //printf("Esporte: ");
        //fgets(atletas[i].esporte, 30, stdin);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        //printf("Altura: ");
        //scanf("%f", &atletas[i].altura);
        setbuf(stdin, NULL);
        }      

     for(int i = 0; i < 5; i++)
          {
          for(int j = 0; j < 5 - 1; j++)
            {
            if(atletas[j + 1].idade > atletas[j].idade)
              {
              int aux = atletas[j].idade;
              atletas[j].idade = atletas[j + 1].idade;
              atletas[j + 1].idade = aux;
              }
            }
          }

    printf("\nNa ordem, do mais velho ao mais novo.\n");
       for(int i = 0; i < 5; i++)
          {
          printf("\nAtleta: %s" , atletas[i].nome);
          printf("Idade: %d\n" , atletas[i].idade);
          }
    return (0);
    }
