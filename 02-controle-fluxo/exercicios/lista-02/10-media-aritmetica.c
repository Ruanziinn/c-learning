#include <stdio.h>

//Escrever um programa que lê três notas inteiras e calcula a sua
//média aritmética.

int main(){

    int n1, n2, n3;
    float media;

    printf("Digite as três notas: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media aritmética = %.2f\n", media);

    return 0;
}