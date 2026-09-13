#include <stdio.h>
#include <stdlib.h>

/*Crie uma struct chamada Produto que armazene os seguintes dados:
-Um código para o produto (número inteiro).
-A quantidade em estoque (número inteiro).
-O preço unitário (número com ponto flutuante, float ou double).

Escreva uma função chamada cadastrarProdutos que receba um array de Produto como
parâmetro. Dentro desta função, você deverá solicitar ao usuário que insira os dados
para 4 produtos.

Na função main, declare um array de Produto com 2 posições.
Chame a função cadastrarProdutos, passando o array que você criou para que ele seja
preenchido.

Após o retorno da função, crie um laço na main para percorrer o array e exibir na tela os
dados de todos os produtos que foram cadastrados, de forma organizada*/

struct Produto
    {
    int codigo;
    int qntEstoque;
    float preco;
    };

void cadastrarProdutos(struct Produto *receberProduto, int tam)
    {
    for(int i = 0; i < tam; ++i)
        {
        printf("Cadastro - Produto %d\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%d", &receberProduto[i].codigo);
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &receberProduto[i].qntEstoque);
        printf("Digite o preco do produto: ");
        scanf("%f", &receberProduto[i].preco);
        puts("---------------------------");
        }
    }


int main()
    {
    struct Produto produto[4];
    int tam = 4;
    cadastrarProdutos(produto, tam);

    puts("### EXIBINDO PRODUTOS CADASTRADOS ###");

    for(int i = 0; i < tam; ++i)
        {
        printf("Produto %d\nCodigo: %d\nQuantidade em estoque: %d\nPreco do produto: %3.2f\n", i + 1, produto[i].codigo, produto[i].qntEstoque, produto[i].preco);
        }

    struct Produto novosProdutos[2];
    tam = 2;
    cadastrarProdutos(novosProdutos, tam);

    puts("### EXIBINDO NOVOS PRODUTOS CADASTRADOS ###");

    for(int i = 0; i < tam; ++i)
        {
        printf("\nProduto %d\nCodigo: %d\nQuantidade em estqoue: %d\nPreco do produto: %3.2f", i + 1, novosProdutos[i].codigo, novosProdutos[i].qntEstoque, novosProdutos[i].preco);
        }
    return (0);
    }
