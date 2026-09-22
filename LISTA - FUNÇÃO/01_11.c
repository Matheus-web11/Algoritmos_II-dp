#include <stdio.h>
#include <stdlib.h>

float verificarTriangulo(float A, float B, float C)
  {
  //A SOMA DE DOIS LADOS DEVE SER MAIOR QUE A TERCEIRA
  if((A + B > C) || (A + C > B) || (B + C > A))
    {
    printf("SE ENQUADRA EM TRIANGULO.\n");

    if((A == B) && (B == C))
      {
      printf("--> TRIANGULO EQUILATERO.\n");
      }
    else if((A == B) && (B != C))
      {
      printf("--> TRIANGULO ISOSCELES.\n");
      }
    else
      {
      printf("--> TRIANGULO ESCALENO.\n");
      }
    }
  return 0;
  }

int main()
  {
  float A = 0.0f, B = 0.0f, C = 0.0f;
  float ehTriangulo = 0.0f;

  printf("Digite tres valores para um triangulo positivos.\n");
  
  printf("Valor A: ");
  scanf("%f" , &A);
  printf("Valor B: ");
  scanf("%f", &B);
  printf("Valor C: ");
  scanf("%f", &C);

  while((A < 0) || (B < 0) || (C < 0))
    {
    printf("POR FAVOR, numeros positivos.\n");
    printf("Valor A: ");
    scanf("%f" , &A);
    printf("Valor B: ");
    scanf("%f", &B);
    printf("Valor C: ");
    scanf("%f", &C);
    }

  ehTriangulo = verificarTriangulo(A,B,C);

  return (0);
  }
