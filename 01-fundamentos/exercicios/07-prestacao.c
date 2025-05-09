#include <stdio.h>

int main() {

    float valor, valorTotal;
    int parcelas = 5;

    printf("Digite o valor da compra: \n");
    scanf("%f", &valor);

    valorTotal = valor / parcelas;

    printf("O valor das prestações da sua compra é: R$ %.2f\n", valorTotal);

}