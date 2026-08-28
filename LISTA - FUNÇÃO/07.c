#include <stdio.h>
#include <stdlib.h>

#define LMT_VECTOR 150

int somarValores(int numeros[LMT_VECTOR], int qntNumeros)
  {
  float mediaNumeros = 0;
  for(int i = 0; i <= qntNumeros; ++i)
    {
    mediaNumeros += (float)numeros[i] / qntNumeros;
    }
  printf("A media dos valores somados eh: %.3f", mediaNumeros);
  return mediaNumeros;
  }

int main()
  {
  int numeros[LMT_VECTOR];
  int qntNumeros = 0, i = 0;
  int getMediaValores = 0;


  printf("Digite o maximo de numeros que quiser.\nPara interromper clique (0).\n");

  do
    {
      ++i;
      printf("Valor %d: ", i);
      scanf("%d", &numeros[i]);
      
      if(numeros[i] < 0)
        {
        printf("Por favor, numeros positivos.\n");
        break;
        }

      if(numeros[i] == 0)
        {
        printf("Encerrando a leitura.\n");
        break;
        }

    qntNumeros++;
    }while(numeros[i] != 0);

  getMediaValores = somarValores(numeros, qntNumeros);

  return (0);
  }