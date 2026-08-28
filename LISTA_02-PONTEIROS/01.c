#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

/* Em  C,  funções  retornam  apenas  um  valor.  Crie  um  programa  que  contorne  isso 
usando ponteiros. 
-Implemente  uma  função  chamada  calcular_esfera  que  receba  o  raio  de  uma 
esfera e devolva sua área e seu volume. 
-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume); 
-Na  main,  peça  ao  usuário  o  raio,  chame  a  função  e  imprima  os  resultados. 
(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³).*/

void Calcular_Esfera(float raio, float *area, float *volume)
  {
  *area = 4.0f * PI * pow(raio, 2.0f);
  *volume = (4.0f/3.0f) * (PI * pow(raio, 3.0f));
  }



int main()
  {
  float raio = 0.0f;
  float area = 0.0f;
  float volume = 0.0f;

  puts("## CALCULAR ESFERA ##");

  printf("Digite um valor para o raio: ");
  scanf("%f", &raio);

  Calcular_Esfera(raio, &area, &volume);

  printf("Valor do raio: %.2f\nArea do circulo: %.3f\nVolume do circulo: %.3f\n", raio, area, volume);

  return (0);
  }