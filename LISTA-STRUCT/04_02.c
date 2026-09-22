#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o PONTO superior
esquerdo e o PONTO inferior direito do retângulo. Cada PONTO é definido por uma
estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia
uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
desse retângulo*/

struct Ponto
    {
    int x;
    int y;
    };

struct Retangulo
    {
    struct Ponto pnt_superior_esq;
    struct Ponto pnt_inferior_dir;
    };

int main()
    {
    struct Retangulo ponto;
    int baseRetangulo = 0, alturaRetangulo = 0;

    puts("Digite dois Pontos (x,y).\n");
    puts("## PONTO 1 ##");
    
    printf("eixo x: ");
    scanf("%d", &ponto.pnt_superior_esq.x);
    printf("eixo y: ");
    scanf("%d", &ponto.pnt_superior_esq.y);

    if((ponto.pnt_superior_esq.x < 0 || ponto.pnt_superior_esq.y < 0))
        {
        while((ponto.pnt_superior_esq.x < 0 || ponto.pnt_superior_esq.y < 0))
            {
            puts("\nPor favor digite valores POSITIVOS.\n");
            puts("## PONTO 1 ##");
    
            printf("eixo x: ");
            scanf("%d", &ponto.pnt_superior_esq.x);
            printf("eixo y: ");
            scanf("%d", &ponto.pnt_superior_esq.y);
            }
        }

    puts("## PONTO 2 ## ");
    printf("eixo x: ");
    scanf("%d", &ponto.pnt_inferior_dir.x);
    printf("eixo y: ");
    scanf("%d", &ponto.pnt_inferior_dir.y);

    if(ponto.pnt_inferior_dir.x < 0 || ponto.pnt_inferior_dir.y < 0)
        {
        while(ponto.pnt_inferior_dir.x < 0 || ponto.pnt_inferior_dir.y < 0)
            {
            puts("\nPor favor digite valores POSITIVOS.\n");
            puts("## PONTO 2 ## ");
            printf("eixo x: ");
            scanf("%d", &ponto.pnt_inferior_dir.x);
            printf("eixo y: ");
            scanf("%d", &ponto.pnt_inferior_dir.y);
            }
        }

    if(ponto.pnt_superior_esq.x > ponto.pnt_inferior_dir.x)
        {
        baseRetangulo = ponto.pnt_superior_esq.x - ponto.pnt_inferior_dir.x;
        }
    else
        {
        baseRetangulo = ponto.pnt_inferior_dir.x - ponto.pnt_superior_esq.x;
        }

    if(ponto.pnt_superior_esq.y > ponto.pnt_inferior_dir.y)
        {
        alturaRetangulo = ponto.pnt_superior_esq.y - ponto.pnt_inferior_dir.y;
        }
    else
        {
        alturaRetangulo = ponto.pnt_inferior_dir.y - ponto.pnt_superior_esq.y;
        }

    int perimetroRetangulo = ((2 * baseRetangulo) + (2 * alturaRetangulo));
    //soma de todos os lados
    int areaRetangulo = baseRetangulo * alturaRetangulo;
    //base x altura
    float diagonalRetangulo = (float)sqrt(pow(baseRetangulo, 2) + (pow(alturaRetangulo, 2)));
    //raiz de quadrado da base + quadrado da altura

    puts("### Informacoes do Retangulo ###");
    printf("Perimetro: %d\n", perimetroRetangulo);
    printf("Area total do retangulo: %d\n", areaRetangulo);
    printf("Comprimento da diagonal do retangulo: %.3f\n", diagonalRetangulo);

    return (0);
    }
