#include <stdio.h>

//Leia a altura de duas pessoas e mostre quem é o mais alto.

int main() {

    float altura1, altura2;

    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &altura1);
    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &altura2);

    if(altura1 > altura2){
        printf("A primeira pessoa é mais alta: %.2f metros\n", altura1);
    } else if(altura2 > altura1){
        printf("A segunda pessoa é mais alta: %.2f metros\n", altura2);
    } else {
        printf("As duas pessoas possuem a mesma altura: %.2f metros\n", altura1);
    }

    return 0;
}