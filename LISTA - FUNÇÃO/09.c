#include <stdio.h>
#include <stdlib.h>

int calcularFuncao(int numeroPositivo)
  {
  int fatorial = 1;
  float S = 1.0f;

  for(int i = numeroPositivo; i >= 1; --i)
    {
    int auxilio = 1;

    fatorial *= i;
    
    for(int j = i; j > 0; --j)
      {
      auxilio *= j;
      printf("%d", j);
      }
      S += 1.0f / auxilio;
      printf(".\n");
    }
   
  printf("--> %d\n", fatorial);
  printf("--> %f", S);

  return S;
  }


int main()
  {
  int numeroPositivo = 0;
  int getResultado = 0;

  printf("--CALCULO--.\n");

  printf("Digite um numero positivo: ");
  scanf("%d", &numeroPositivo);
  while(numeroPositivo <= 0)
    {
    printf("NUMERO POSITIVO: ");
    scanf("%d", &numeroPositivo);
    }
  
  getResultado = calcularFuncao(numeroPositivo);
 

  return (0);
  }