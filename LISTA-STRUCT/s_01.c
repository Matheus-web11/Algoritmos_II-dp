#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida*/

struct DadosPessoais
    {
    char nome[50];
    int idade;
    char endereco[100];
    };

void exibirDados(struct DadosPessoais p1)
    {
    puts("\n### EXIBINDO OS DADOS ###");
    printf("Nome: %s", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s\n", p1.endereco);
    }

int main()
    {
    struct DadosPessoais p1;
    int c;
    puts("### DADOS PESSOAIS ###");

    printf("Digite seu nome: ");
    fgets(p1.nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);
    setbuf(stdin,NULL);
    
    printf("Digite seu endereco: ");
    fgets(p1.endereco, 100, stdin);
    exibirDados(p1);

    return(0);

    /*  LIMPAR BUFF: setbuf(stdin,null).  */
    /*//while(c = getchar() != '\n' && c != EOF);
    /*LIMPA BUFFER DO TECLADO.
    OQUE ESSA LINHA ESTA FAZENDO: Ele verifica cada caracter na minha cadeia de caracteres,
    e vai jogando fora. Se o caracter for igual a '\n'(caracter de fim de linha) ele pega o caracter e limpa
    o nosso buffer, o EOF indica 'fim de arquivo' ele garante que o nosso while nao entre em um laco
    infinito. O ; no final do while indica que ele nao tem instrucoes dentro dele, ou seja,
    ele verifica o caracter e descarta ele.*/

    /*EOF --> Ele nos garante que os dados entrados foram verificados da forma correta, que a
    leitura foi bem-sucedida.
    por exemplo-> se o codigo pede para voce digitar valores inteiros so que ai voce digite caracter
    ele verifica e ve que voce nao seguiu com oque foi pedido.*/
    }