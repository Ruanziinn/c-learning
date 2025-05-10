#include <stdio.h>

//A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros.
//Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.

int main() {

    float valor, valorTotal;
    int parcelas = 5;

    printf("Digite o valor da compra: \n");
    scanf("%f", &valor);

    valorTotal = valor / parcelas;

    printf("O valor das prestações da sua compra é: R$ %.2f\n", valorTotal);

}