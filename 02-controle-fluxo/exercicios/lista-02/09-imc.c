#include <stdio.h>
#include <math.h>

//Faça um programa que calcule o IMC de uma pessoa e mostre como ela está. Use
//os valores: Abaixo de 18,49 - Abaixo do peso; Entre 18,5 e 24,99 - Peso normal;
//Acima de 25 - Acima do peso.

int main() {

    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("Seu IMC é: %.2f\n", imc);

    if(imc <= 18.49){
        printf("Abaixo do peso.\n");
    } else if(imc <= 24.99){
        printf("Peso normal.\n");
    } else {
        printf("Acima do peso.\n");
    }

    return 0;
}