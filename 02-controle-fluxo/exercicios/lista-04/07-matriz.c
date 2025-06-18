#include <stdio.h>

//Matriz – Fazer um programa que leia a quantidade de linhas e colunas de uma matriz e a desenhe com o caractere
//que o usuário escolher. Ex: lin = 2, col = 2, char = *

int main(){

    int lin, col;
    char caractere;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &lin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);
    printf("Digite o caractere que deseja preencher a matriz: ");
    scanf(" %c", &caractere);

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%c ", caractere);
        }
        printf("\n");
    }

    return 0;
}