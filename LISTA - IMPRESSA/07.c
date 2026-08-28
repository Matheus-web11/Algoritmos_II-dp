#include <stdio.h>
#include <stdlib.h>

/*Questão 7: Analisador de Cloro para Piscinas
Crie uma função chamada verificar cloro que recebe a medição atual de cloro (em ppm).
A função deve retornar uma mensagem recomendando a ação necessária.

No programa principal, peça ao usuário para informar a quantidade de medições que ele deseja realizar. Use um laço de repetição para ler cada medição e, classifique:
Abaixo de 1.0 ppm: "Adicionar cloro".
Entre 1.0 e 3.0 ppm: "Nível ideal".
Acima de 3.0 ppm: "Não adicionar cloro."

*/

int main()
  {
  int totalMedicoes = 0;
  float nivelCloro = 0.0;

  printf("---------Verificando o cloro da Agua----------\n");

  do
    {
    printf("Quantas medicoes gostaria de fazer.\ndigite 0 se nao quiser: ");
    scanf("%d" , &totalMedicoes);

    if(totalMedicoes == 0)
      {
      printf("Sem medicoes.\n");
      break;/*LEMBRAR QUE O break pode ser usado quando o if esta envolvido a algum
      laco de repeticao, em caso de if isolado nao e permitido*/
      }
    printf("Digite o nivel de cloro nas aguas. de (1.0 ate 3.0 ppm)\n");
    for(int i = 0; i < totalMedicoes; ++i)
      {
      printf("%d medicao: ", i + 1);
      scanf("%f" , &nivelCloro);

      if(nivelCloro < 1.0)
        {
        printf("%.2f ppm: Adicionar Cloro.\n", nivelCloro);
        }
      if((nivelCloro > 1.0) && (nivelCloro < 3.0))
        {
        printf("%.2f ppm: Nivel ideal.\n", nivelCloro);
        }
      if(nivelCloro > 3.0)
        {
        printf("%.2f ppm: Nao adicionar Cloro.\n", nivelCloro);
        }
      }

    }while(totalMedicoes != 0);


  return (0);
  }