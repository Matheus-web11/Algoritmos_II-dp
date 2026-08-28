#include <stdio.h>
#include <stdlib.h>

/*Questão 5: Média
Faça uma função que leia um número não determinado
de valores positivos e retorna a média aritmética dos
mesmos.*/

int main()
  {
  const int TAM_MAX_VECTOR = 150;

  int valoresEscolhido[TAM_MAX_VECTOR];
  int somarValores = 0;
  float mediaValores = 0;
  int i = 0, qntNumeros = 0;

  printf("----ENTRADA E VALORES------");
  printf("Digite o maximo de numeros que quiser. (0 para interromper)\n");
  //printf("Digite o numero ZERO se quiser parar.\n");
  
  for(i = 0; i < TAM_MAX_VECTOR; ++i)
    {
    printf("Valor %d: ", i + 1);
    scanf("%d" , &valoresEscolhido[i]);

    if(valoresEscolhido[i] == 0)
      {
      printf("Encerrando leitura.\n");
      break;
      }
    if(valoresEscolhido[i] < 0)
      {
      printf("Nao e aceito valores negativos.\n");
      }
    qntNumeros++;
    }

    for(i = 0; i < qntNumeros; ++i)
      {
      somarValores += valoresEscolhido[i];
      mediaValores = somarValores / qntNumeros;
      }
  
  printf("A soma dos valores: %d\n" , somarValores);
  printf("A media dos valores somados: %.3f" , mediaValores);
  return (0);
  }