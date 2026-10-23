#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um
programa que mostre o tamanho em byte dessa estrutura*/

struct Aluno
    {
    int matricula;
    char nome[30];
    float notas[3];
    };


int main()
    {
    /*da 46 bytes, so que na memoria ess struct 48 bytes, por conta do 'enchimento de bits / padding'*/
    printf("O tamanho em Bytes da struct Aluno -> %zu\n", sizeof(struct Aluno));

    return (0);
    }