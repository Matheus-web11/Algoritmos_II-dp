#include <stdio.h>
#include <math.h>

#define PI 3.14


float calcularVolume(int raio)
  {
  float volumeEsfera = (float) 4/3 * PI * pow(raio, 3);

  return volumeEsfera;
  }



int main()
  {
  int raioEsfera = 0;
  float getVolumeEsfera = 0;

  printf("Diigte um valor de raio para uma esfera: ");
  scanf("%d", &raioEsfera);

  getVolumeEsfera = calcularVolume(raioEsfera);

  printf("O volume da esfera eh: %.2f\n", getVolumeEsfera);

  return 0;
  }