#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
e exiba o maior endereço*/


int main()
    {
    int a = 0, b = 0;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf("&a = %p\n", p1);
    printf("&b = %p\n", p2);

    if(p1 > p2)
        printf("O endereco de 'a' e maior que 'b'.\n");
        
    else
        printf("O endereco de 'b' e maior que 'a'\n");

    return (0);
    }