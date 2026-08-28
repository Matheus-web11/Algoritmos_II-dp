#include <stdio.h>
#include <stdlib.h>

/*Questão 11 - Controle de Qualidade de Produção
Um inspetor de fábrica analisa 10 peças de um lote. Para cada peça, o usuário deve digitar o peso (em gramas).
Se o peso estiver entre 145g e 155g, a peça é "Aprovada".
Se o peso for menor que 145g, é "Refugada por falta de material".
Se o peso for maior que 155g, é "Refugada por excesso".
Ao final das 10 leituras, o programa deve exibir o total de peças aprovadas e a média de peso apenas das peças que foram aprovadas.*/


int main()
  {
  int avaliarPeso[10], totalPesosAprovados = 0, mediaPesosAprovados = 0;
  char exclamacao = '!';

  printf("Digite o peso de 10 lotes (em gramas).\n");

  for(int i = 0; i < 10; ++i)
    {
    printf("\nPeso %d: ", i + 1);
    scanf("%d" , &avaliarPeso[i]);

    if((avaliarPeso[i] > 145) && (avaliarPeso[i] < 155))
      {
      printf("A peca de %d gramas foi: Aprovada%c", avaliarPeso[i], exclamacao);
      printf("Aprovada");

      totalPesosAprovados = avaliarPeso[i];
      mediaPesosAprovados += avaliarPeso[i] / totalPesosAprovados;
      }
    if(avaliarPeso[i] < 145)
      {
      printf("A peca de %d gramas foi: Refugada por falta de material%c", avaliarPeso[i], exclamacao);
      }
    
    if(avaliarPeso[i] > 155)
      {
      printf("A peca de %d gramas foi: Refugada por excesso%c", avaliarPeso[i], exclamacao);
      }
    }
  printf("Total de pesos aprovados: %d\n", totalPesosAprovados);
  printf("Media de pesos aprovados: %d", mediaPesosAprovados);



  return (0);
  }