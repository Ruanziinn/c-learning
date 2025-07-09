#include <stdio.h>

//Fazer um programa que desenha uma pirâmide, usando comandos de repetição.
//Saída:
/* 
         X
        XXX
       XXXXX
      XXXXXXX
     XXXXXXXXX
    XXXXXXXXXXX
   XXXXXXXXXXXXX

*/ 

int main() {

    int linhas;
    char caractere;

    scanf("%d", &linhas);
    scanf(" %c", &caractere);

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= linhas - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++){
            printf("%c", caractere);
        }
        printf("\n");
    }

    return 0;
}