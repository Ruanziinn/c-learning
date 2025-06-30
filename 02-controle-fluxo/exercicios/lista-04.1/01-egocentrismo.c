#include <stdio.h>

//Egocentrismo - Implemente um programa que mostra seu nome na tela dez vezes.

int main() {

    char nome[100];
    fgets(nome, sizeof(nome), stdin);

    for(int i = 0; i < 10; i++){
        printf("%d - %s", i + 1, nome);
    }

    return 0;
}