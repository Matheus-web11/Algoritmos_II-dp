#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/

struct Hora
    {
    int hora;
    int minuto;
    int segundo;
    };

int getMaiorHora(struct Hora *p1)
    {
    int maior = 0;
    for(int i = 1; i < 5; ++i)
        {
        if(p1[i].hora > p1[maior].hora)
            {
            maior = i;
            }
        else if((p1[i].hora == p1[maior].hora) && (p1[i].minuto > p1[maior].minuto))
            {
            maior = i;
            }
        else if((p1[i].hora == p1[maior].hora) && (p1[i].minuto == p1[maior].minuto) && (p1[i].segundo > p1[maior].segundo))
            {
            maior = i;
            }
        }
    return maior;
    }

int main()
    {
    struct Hora maiorHora[5];
    int proximaPosicao = 0;
    int receberMaiorHorario = 0;

    //int *p1_H, *p1_M, *p1_S;

    //p1_H = &proximaPosicaoH;
    //p1_M = &proximaPosicaoM;
    //p1_S = &proximaPosicaoS;

    puts("## DIGITE 5 HORARIOS (HORA,MIN,SEG)");

    for(int i = 0; i < 5; ++i)
        {
        printf("-> Horario %d\n", i + 1);
        printf("Horas: ");
        scanf("%d", &maiorHora[i].hora);
        while((maiorHora[i].hora > 23) || (maiorHora[i].hora < 0))
            {
            printf("Digite para hora entre (1 a 23): ");
            scanf("%d", &maiorHora[i].hora);
            }
        printf("Minutos: ");
        scanf("%d", &maiorHora[i].minuto);
        while((maiorHora[i].minuto > 59) || (maiorHora[i].minuto < 0))
            {
            printf("Digite para minuto entre (1 a 59): ");
            scanf("%d", &maiorHora[i].minuto);
            }
        printf("Segundos: ");
        scanf("%d", &maiorHora[i].segundo);
        while((maiorHora[i].segundo > 59) || (maiorHora[i].segundo < 0))
            {
            printf("Digite para segundo entre (1 a 59): ");
            scanf("%d", &maiorHora[i].segundo);
            }
        }

    receberMaiorHorario = getMaiorHora(maiorHora);

    printf("## MAIOR HORARIO ##\n-> Horario %d <-\nHoras: %dh\nMinutos: %dmin\nSegundos: %dseg\n", receberMaiorHorario + 1, maiorHora[receberMaiorHorario].hora, maiorHora[receberMaiorHorario].minuto, maiorHora[receberMaiorHorario].segundo);
    return (0);
    }
