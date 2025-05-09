#include <stdio.h>

int main(){

    float valor, rendimento;

    printf("Digite o valor que deseja investir: ");
    scanf("%f", &valor);

    rendimento = valor + (valor * 0.007);

    printf("Valor com rendimento: %.2f", valor);

    return 0;
}