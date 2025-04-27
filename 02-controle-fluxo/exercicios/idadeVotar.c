#include <stdio.h>

int main() {
    
    int idade = 15;

    if(idade >= 16) {
        printf("Você tem direito ao voto!\n");
        if(idade < 18) {
         printf("Seu voto não é obrigatório.\n");
        }
    } else {
        printf("Você não tem a idade mínima para votar.\n");
        int aux = 16 - idade;
        printf("Faltam %d ano(s) para você poder votar.\n", aux);

    }

    return 0;
}