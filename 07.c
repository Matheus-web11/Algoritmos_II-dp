#include <stdio.h>
#include <stdlib.h>

void receberStrings(char *p1, char *p2)
    {
    for(int i = 0; i < 10; ++i)
        {
            if(*(p2 + i) == *(p1 + i))
                {
                printf("&palavra2[%d] = %p\nCaracter: %c\n", i, p2, *p2);
                //printf("A segunda palavra tem na primeira.\n");
                }
            else
                {
                printf("A segunda frase nao ocorre na primeira.\n");
                }
        }
    }



int main()
    {
    char palavra1[10] = "cavalo", palavra2[10] = "valo";
    
    
    receberStrings(palavra1, palavra2);



    return (0);
    }   