#include <stdio.h>

//Receba os valores das laterais de um quadrilátero e diga se é um quadrado ou não.

int main() {

    float l1, l2, l3, l4;

    printf("Digite os valores das laterais do quadrilátero: ");
    scanf("%f%f%f%f", &l1, &l2, &l3, &l4);

    if(l1 == l2 && l2 == l3 && l3 == l4){
        printf("É um quadrado.\n");
    } else {
        printf("Não é um quadrado.\n");
    }

    return 0;
}