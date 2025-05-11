#include <stdio.h>

//Leia o peso de duas pessoas e mostre quem é o mais pesado.

int main() {

    float peso1, peso2;

    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);
    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    if(peso1 > peso2){
        printf("A primeira pessoa é mais pesada: %.2f kg\n", peso1);
    } else if(peso2 > peso1){
        printf("A segunda pessoa é mais pesada: %.2f kg\n", peso2);
    } else {
        printf("As duas pessoas possuem o mesmo peso: %.2f kg\n", peso1);
    }

    return 0;
}