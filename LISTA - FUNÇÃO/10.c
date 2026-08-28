#include <stdio.h>
#include <stdlib.h>

float calcularOperacao(float valor1, float valor2, char simbolo)
  {
  float resultado = 0.0f;

  if(simbolo == '+')
    {
    resultado = valor1 + valor2;
    }
  else if(simbolo == '-')
    {
    resultado = valor1 - valor2;
    }
  else if(simbolo == '*')
    {
    resultado = valor1 * valor2;
    }
  else if(simbolo == '/')
    {
    if(valor2 == 0)
      {
      printf("Desculpe, operacao invalida.\n");
      return 0;
      }
    resultado = valor1 / valor2;
    }
  else
    {
    printf("Operacao invalida.\n");
    return 0;
    }
  printf("A resposta final eh: %.3f", resultado);
  return resultado;
  }

int main()
  {
  float valor1 = 0.0f, valor2 = 0.0f;
  float getCalculo = 0.0f;
  char simbolo;

  printf("---OPERACAO MATEMATICA---.\n");

  printf("Digite dois numeros.\n");
  printf("Valor 1: ", valor1);
  scanf("%f", &valor1);

  printf("Valor 2: ", valor2);
  scanf("%f", &valor2);

  printf("ESCOLHA A OPERACAO.\n(+)SOMA.\n(-)SUBTRACAO.\n(*)MULTIPLICACAO.\n(/)DIVISAO.\n--> ");
  scanf(" %c", &simbolo);

  while((simbolo != '+') && (simbolo != '-') && (simbolo != '*') && (simbolo != '/'))
    {
    printf("Simbolo invalido.\n");
    printf("ESCOLHA A OPERACAO.\n(+)--> SOMA.\n(-)SUBTRACAO.\n(*)MULTIPLICACAO.\n(/)DIVISAO.\n--> ");
    scanf(" %c", &simbolo);
    }

  getCalculo = calcularOperacao(valor1, valor2, simbolo);
  return (0);
  }