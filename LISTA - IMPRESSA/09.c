#include <stdio.h>
#include <stdlib.h>

/*Questão 9: Sistema de Risco de Investimento
Crie uma função avaliar_setor(setor) que recebe uma string (ex: "Tecnologia", "Energia", "Varejo") e retorna um fator de risco (um número de 1 a 3).
Crie uma função analisar_investimento(valor, setor) que:
Chama a função avaliar_setor para obter o risco.
E classifique:
Se o risco for 1 e o valor > 10.000: "Investimento Seguro e Estratégico".
Se o risco for 3 e o valor > 50.000: "Alto Risco: Requer Aprovação da Diretoria".
Para os demais casos: "Análise Padrão".
Obs: O valor e o setor devem ser informados na função principal.*/

/*OBS INTERESSANTE:
  char areaInvestir[20]; nesse caso eu indico um ponteiro para um array de 20 caracteres*/
  //EX: char (*)[20]
  /*scanf("%19s", areaInvestir);nao e preciso usar & ja que o %s faz com que o
  ponteiro exigido aponte para o primeiro caractere do array.*/

int main()
  {
  int risco = 0;
  int escolherArea = 0;

  printf("Digite a area que gostaria de investir.\n->Digite 1 para Tecnologia\n-> Digite 2 para Energia\n-> Digite 3 para Varejo\nConfirme: ");
  scanf("%d", &escolherArea);
    
  while((escolherArea < 1) || (escolherArea > 3))
    {
    printf("Por favor entre com valor de 1 a 3.\n");
    printf("Confirme: ");
    scanf("%d", &escolherArea);
    }

  if(escolherArea == 1)
    {
    printf("-> Investir Em Tecnolgia.\n");
    printf("Risco de perda: Baixo.\n");
    risco = 1;
    }
  if(escolherArea == 2)
    {
    printf("-> Risco de perda: Medio.\n");
    risco = 2;
    }
  if(escolherArea == 3)
    {
    printf("-> Risco de perda: Alto.\n");
    risco = 3;
    }

  float valorInvestimento = 0.0;
  printf("Digite o valor que gostaria de investir na area escolhida: ");
  scanf("%f", &valorInvestimento);

  while(valorInvestimento < 10.000)
    {
    printf("Para investir deve entrar com valores acima de 10.000.\n");
    printf("Valor: ");
    scanf("%f", &valorInvestimento);
    }

  if((risco == 1) && (valorInvestimento > 10.000))
    {
    printf("Investimento Seguro e Estrategico.\n");
    }

  if((risco == 2) && (valorInvestimento > 10.000))
    {
    printf("Analise Padrao.\n");
    }
  if((risco == 3) && (valorInvestimento > 50.000))
    {
    printf("Alto Risco: Requer Aprovacao da Diretoria.\n");
    }

  return (0); 
  }