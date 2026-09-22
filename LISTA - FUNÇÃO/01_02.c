#include <stdio.h>
#include <math.h>

float x1(float a, float b, float delta)
  {
  float x1 = (-b + sqrt(delta)) / 2 * a;
  return x1;
  }  

float x2(float a, float b, float delta)
  {
  float x2 = (-b - sqrt(delta)) / 2 * a;
  return x2;
  } 

int main()
  {
  float a, b, c;
  float getX1, getX2;
  puts("## CALCULO BHASKARA ##");
  printf("Digite valores para a, b e c.\n");
  printf("A: ");
  scanf("%f", &a);
  printf("B: ");
  scanf("%f", &b);
  printf("C: ");
  scanf("%f", &c);

  float delta = pow(b, 2) - 4 * a * c;
  if(delta < 0)
    {
    printf("Nao possui raizes.\n");
    return 0;
    }

  getX1 = x1(a, b, delta);
  getX2 = x2(a, b, delta);

  printf("O delta eh: %.2f\n", delta);
  printf("A raiz x1 eh: %.2f\n", getX1);
  printf("A raiz x2 eh: %.2f\n", getX2);
  return (0);
  }
