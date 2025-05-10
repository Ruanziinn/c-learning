#include <stdio.h>

//Faça um algoritmo que receba um valor que foi depositado e exiba o valor com rendimento
//após um mês. Considere fixo o juro da poupança em 0,70% a.m.

int main(){

    float valor, rendimento;

    printf("Digite o valor que deseja investir: ");
    scanf("%f", &valor);

    rendimento = valor + (valor * 0.007);

    printf("Valor com rendimento: %.2f", rendimento);

    return 0;
}