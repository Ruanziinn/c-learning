#include <stdio.h>

//Escrever um programa que produza a saída abaixo na tela, para N linhas e usando um
//caractere lido do teclado (no exemplo, *). Após mostrar uma vez, o programa repete o processo, só parando quando
//N for zero.

//Saída:
// * *
// * * * *
// * * * * * *
//(. . .)

int main() {

    int linhas;
    char caractere;

    scanf("%d", &linhas);
    scanf(" %c", &caractere);

    while(linhas != 0){

        for(int i = 1; i <= linhas; i++){
            for(int j = 1; j <= i * 2; j++){
                printf("%c ", caractere);
            }
            printf("\n");
        }

        scanf("%d", &linhas);
    }

    return 0;
}