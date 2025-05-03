#include <stdio.h>

//Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda.
//Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual
//informado pelo usuário.

int main() {

    float preco_custo, percentual, preco_venda;

    printf("Digite o preço de custo do produto: R$ ");
    scanf("%f", &preco_custo);
    printf("Digite o percentual de acréscimo: R$ ");
    scanf("%f", &percentual);

    preco_venda = preco_custo + (preco_custo * (percentual / 100));

    printf("Valor de venda: R$ %.2f\n", preco_venda);

    return 0;
}