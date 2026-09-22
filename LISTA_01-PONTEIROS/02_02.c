#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço*/




int
main()
    {
    int a = 0, b = 0;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    int *p1 = &a, *p2 = &b;

    if(p1 > p2)
        printf("O endereco de 'a' eh maior.\nEndereco: %p\nConteudo = %d\n", p1, *p1);
    else
        printf("O endereco de 'b' eh maior.\nEndereco: %p\nConteudo = %d\n", p2, *p2);

    return (0);
    }
