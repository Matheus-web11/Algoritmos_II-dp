#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa
na memória: char, int, float, double.*/


//especificador para mostrar os respectivos tipos eh: %zu
int main()
    {
    printf("Tamanho em bytes do (char): %zu\n", sizeof(char));
    printf("Tamanho em bytes do (int): %zu\n", sizeof(int));
    printf("Tamanho em bytes do (float): %zu\n", sizeof(float));
    printf("Tamanho em bytes do (double): %zu\n", sizeof(double));
    return (0);
    }