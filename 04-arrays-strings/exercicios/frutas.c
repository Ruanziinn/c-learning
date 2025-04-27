#include <stdio.h>

int main() {

    //Inicializando o array
    char *frutas[] = {"banana", "melancia", "acerola"};

    // Calculando o número de elementos no array
    int N = sizeof(frutas) / sizeof(frutas[0]);

    //Imprimindo os elementos do array
    for(int i = 0; i < N; i++){
        printf("%s\n", frutas[i]);
    }

    return 0;
}