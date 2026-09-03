#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
caracteres das strings.*/

int compararStrings(char *string1, char *string2)
    {
    int i, j, auxiliar = 1;
    // auxiliar 1 = aqui ele considera, auxiliar como 'verdadeiro' 
    for(i = 0, j = 0; (*string1 != '\0'); ++i)
        {
        while(*(string1 + i) == *(string2 + j))
            {
            /*  lendo letra por letra de cada string
                string 1 com 'i'
                string 2 com j  */
            ++i;
            ++j;
            /*interrompo o laço apos, o fim da string 2*/
            if(*(string2 + j) == '\n' || *(string2 + j) == '\0')
                {
                return 1;
                }
            else if(*(string2 + j) != *(string1 + i))
                {
                auxiliar = 0;
                /*  aqui ele muda o auxiliar como 0. ou seja,
                    apos passar no 'else if' ele muda o valor
                    e vai para o return auxiliar.  */
                }
            }
        }
    return auxiliar;
    }

int main()
    {
    char palavra1[30], palavra2[30];
    int receberPalavra = 0;
    puts("Digite duas strings");
    printf("String 1: ");
    fgets(palavra1, 30, stdin);
    printf("String 2: ");
    fgets(palavra2, 30, stdin);

    receberPalavra = compararStrings(palavra1, palavra2);

    if(receberPalavra == 1)
        {
        puts("A segunda string se encontra na primeira.");
        }
    else
        {
        /*entra nesse else apos o 'return auxiliar' la da funcao.
        quando eu mudei auxiliar para 'zero'.*/
        puts("A segunda string nao se encontra na primeira.");
        }
    return (0);
    }
