#include <stdio.h>

//Elabore um programa que lê três valores e calcula a média
//geométrica dos números lidos (A média geométrica entre um conjunto de n dados é a raiz
//n-ésima da multiplicação desses dados).

int main(){

    float x1, x2, x3, prod, media;

    printf("Digite os três valores para calcular a média geométrica: ");
    scanf("%f%f%f", &x1, &x2, &x3);

    prod = x1 * x2 * x3;
    media = pow(prod, 1.0 / 3.0);

    printf("Média geométrica: %.2f\n", media);

    return 0;
}