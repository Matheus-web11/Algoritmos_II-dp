#include <stdio.h>
#include <stdlib.h>

/*Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
caracteres das strings.*/

void receberStrings(char *p1, char *p2)
    {
    for(int i = 0; i < 10; ++i)
        {
        for(int j = 0; j < 10; ++j)
            {
            if(*(p2 + i) == *(p1 + j))
                {
                printf("Caractere[%c], ocorre na outra palavra.\n", *(p2 + i));
                }

            }
        }
    }



int main()
    {
    char palavra1[10] = "cavalo", palavra2[10] = "valo";
    
    receberStrings(palavra1, palavra2);

    return (0);
    }   