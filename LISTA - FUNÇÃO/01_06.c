#include <stdio.h>
#include <stdlib.h>

float calcularMediaNota(float notas[3])
  {
  float notaFinal = 0.0f;

  printf("A media eh--> \t");
  for(int i = 0; i < 3; ++i)
    {
    notaFinal += notas[i] / 3.0f;
    }

  if((notaFinal >= 0.0f) && (notaFinal <= 4.9f))
    {
    printf("Nota: %.2f = Conceito D.\n", notaFinal);
    }
  else if((notaFinal >= 5.0f) && (notaFinal <= 6.9f))
    {
    printf("Nota: %.2f = Conceito C.\n", notaFinal);
    }
  else if((notaFinal >= 7.0f) && (notaFinal <= 8.9f))
    {
    printf("Nota: %.2f = Conceito B.\n", notaFinal);
    }
  else if((notaFinal >= 9.0f) && (notaFinal <= 10.0f))
    {
    printf("Nota: %.2f = Conceito A.\n", notaFinal);
    }
  return notaFinal;
  }


int main()
  {
  float notas[3];
  float receberMedia = 0.0f;

  printf("---SISTEMA ACADEMICO---\n");

  printf("Digite tres notas.\n");

  for(int i = 0; i < 3; ++i)
    {
    printf("Nota %d: ", i + 1);
    scanf("%f" , &notas[i]);
    }

  receberMedia = calcularMediaNota(notas);

  return (0);
  }
