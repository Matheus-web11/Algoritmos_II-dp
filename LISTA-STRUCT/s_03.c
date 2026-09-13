#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct AlunoMedia
  {
  float media;/*fazer uma variavel float comum do que de vez fazer
  um vetor de media[5], porque seria assim: um aluno tem uma uma media só, mas eu estava reseervando
  5 espaços de memorias para um unico dade isso e igual espaço vazio + codigo mais pesado.*/

  };

struct Aluno
  {
  char matricula[50];
  char nome[50];
  float notas[3];
  struct AlunoMedia verMediaAluno;
  };

void cadastrarAlunos(struct Aluno *regs_aluno)
  {
  printf(" ## Dados que serao pedidos.\nMatricula -> desta forma ex(00.00.00)\nTres notas da disciplina. ## \n");
  for(int i = 0; i < 5; ++i)
    {
    setbuf(stdin, NULL);
    printf("Matricula do aluno %d: ", i + 1);
    fgets(regs_aluno[i].matricula, sizeof(regs_aluno->matricula), stdin);
    printf("Nome: ");
    fgets(regs_aluno[i].nome, sizeof(regs_aluno->nome), stdin);
    for(int j = 0; j < 3; ++j)
      {
      printf("Nota %d: ", j + 1);
      scanf("%f", &regs_aluno[i].notas[j]);
      }
    }
  }

void mediaCadaAluno(struct Aluno *regs_aluno)
  {

  for(int i = 0; i < 5; ++i)
    {
    /*Aqui eu zero o valor da media para CADA ALUNO*/
    regs_aluno[i].verMediaAluno.media = 0.0f;

    for(int j = 0; j < 3; ++j)
      {
      /*aqui eu so somo as 3 notas de cada aluno*/
      regs_aluno[i].verMediaAluno.media += (float)regs_aluno[i].notas[j];
      }
    /*e faço a media FORA do laço que vai soma as notas de cada aluno.*/
    regs_aluno[i].verMediaAluno.media /= 3.0f;/*o /= mesma logica do +=*/
    printf("media do aluno %d: %.2f\n", i + 1, regs_aluno[i].verMediaAluno.media);
    }
  }

int verificarMaiorMedia(struct Aluno *regs_aluno)
  {
  int posicaoMaiorMedia = 0;/*indice, assumindo que na posicao 0 eu tenho a maior media*/

  for(int i = 1; i < 5; ++i)
    {
    if(regs_aluno[i].verMediaAluno.media > regs_aluno[posicaoMaiorMedia].verMediaAluno.media)
      {
      /*comparacoes com regiao de memoria: mediaMaior que esta na posicao 0, com o i que se inicia em 1.
      isso seria eu comparar a media do aluno na posicao [i] e [i + 1].*/
      posicaoMaiorMedia = i;
      }
    }
  return posicaoMaiorMedia;/*a posicao onde reside no vetor o aluno com maior media*/
  }

void exibirMaiorMedia(struct Aluno *regs_aluno, int getMaiorMedia)
  {
  puts("\n### ALUNO COM MAIOR MEDIA ###");
  printf("Nome: %s", regs_aluno[getMaiorMedia].nome);
  printf("Media: %.2f", regs_aluno[getMaiorMedia].verMediaAluno.media);
  }

int main()
  {
  struct Aluno alunos[5];
  int getMediaMaior = 0;
  puts("## REGISTRO DE ALUNOS ##");

  cadastrarAlunos(alunos);
  mediaCadaAluno(alunos);
  getMediaMaior = verificarMaiorMedia(alunos);
  exibirMaiorMedia(alunos, getMediaMaior);
  return (0);
  }