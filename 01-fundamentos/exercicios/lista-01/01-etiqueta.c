#include <stdio.h>

//Escreva um programa que leia 4 números e mostre os números digitados
//pelo usuário e os mesmos números somados de 1.

int main(){

    int a, b, c, d;

    printf("Digite 4 números: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    printf("%d %d %d %d\n", a, b, c, d);
    a++; b++; c++; d++;
    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}