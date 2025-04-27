#include <stdio.h>

int main() {

    //Input
    char meu_nome[10] = "Ruan";
    int minha_idade = 20;

    //Output
    printf("Meu nome: %s\nIdade: %d anos\n", meu_nome, minha_idade);

    //Input -> inserindo as informações através do teclado
    char nome[10];
    int idade;

    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Qual sua idade? ");
    scanf("%d", &idade);

    //Output
    printf("Seu nome é %s e você tem %d anos!\n", nome, idade);

    return 0;
}