#include <stdio.h>
#include <math.h>

//Para doar sangue é necessário ter entre 16 e 69 anos. Faça um programa que
//pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.

int main() {

    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 16 && idade <= 69){
        printf("Pode doar sangue.\n");
    } else {
        printf("Não pode doar sangue.\n");
    }

    return 0;
}