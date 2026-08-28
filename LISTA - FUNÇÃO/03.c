#include <stdio.h>

void calcularTempo(int tempoSegundos)
  {
  int tempoHora = tempoSegundos / 3600;
  int tempoMinuto = (tempoSegundos % 3600) / 60;
  int segundos = ((tempoSegundos % 3600) % 60);

  printf("Tempo hora: %d\n" , tempoHora);
  printf("Tempo minuto: %d\n", tempoMinuto);
  printf("Tempo segundos: %d", segundos);
  }


int main()
  {
  int tempoSegundos = 0;

  printf("Digite um numero em segundos: ");
  scanf("%d", &tempoSegundos);

  calcularTempo(tempoSegundos);

  return (0);
  }