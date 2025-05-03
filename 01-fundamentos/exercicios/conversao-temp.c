#include <stdio.h>

//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
//fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius.

int main() {

    float C, F;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &C);

    F = (9.0 * C + 160.0) / 5.0;

    printf("Temperatura em Fahrenheit: %.2f\n", F);

    return 0;
}