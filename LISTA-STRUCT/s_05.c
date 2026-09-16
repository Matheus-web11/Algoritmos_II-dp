#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba
os nomes da pessoa mais nova e da mais velha*/

struct Pessoa
    {
    char nome[50];
    int idade;
    };

int pessoaMaisVelha(struct Pessoa *p1)
    {
    int proxPessoa = 0;

    for(int i = 1; i < 6; ++i)
        {
        if(p1[i].idade > p1[proxPessoa].idade)
            {
            proxPessoa = i;
            }   
        }
    return proxPessoa;/*retorna o indice dentro do vetor da pessoa mais velha*/
    }

int pessoaMaisNova(struct Pessoa *p1)
    {
    int proxPessoa = 0;
        
    for(int i = 0; i < 6; ++i)
        {
        if(p1[i].idade < p1[proxPessoa].idade)
            {
            proxPessoa = i;
            }   
        }
    return proxPessoa;/*retorna o indice aonde esta a pessoa mais nova.*/
    }


int main()
    {
    struct Pessoa ps[6];
    int getPessoaVelha = 0, getPessoaNova = 0;

    puts("## REGISTRO DE 6 PESSOAS ##\n(Nome) e (Idade)\n");
    
    for(int i = 0; i < 6; ++i)
        {
        printf("-> Pessoa %d <-\n", i + 1);
        printf("Nome: ");
        fgets(ps[i].nome, 50, stdin);

        printf("Idade: ");
        scanf("%d", &ps[i].idade);
        setbuf(stdin, NULL);
        }

    getPessoaVelha = pessoaMaisVelha(ps);

    puts("\n## PESSOA MAIS VELHA ##");
    printf("Nome: %s", ps[getPessoaVelha].nome);
    printf("Idade: %d\n", ps[getPessoaVelha].idade);

    getPessoaNova = pessoaMaisNova(ps);

    getPessoaVelha = pessoaMaisVelha(ps);

    puts("\n## PESSOA MAIS NOVA ##");
    printf("Nome: %s", ps[getPessoaNova].nome);
    printf("Idade: %d", ps[getPessoaNova].idade);
    return 0;
    }