#include <stdio.h>

//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem
//do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e
//depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do
//distribuidor seja de 28% e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica
//de um carro e informe o custo ao consumidor do mesmo.

int main() {

    float custo_fabrica, impostos, valorParcial, custo_consumidor;
    float percent_dist = 0.28;
    float percent_imp = 0.45;

    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    impostos = custo_fabrica * percent_imp;
    valorParcial = custo_fabrica + impostos;
    custo_consumidor = valorParcial + (valorParcial * percent_dist);

    printf("Valor de custo ao consumidor R$ %.2f\n", custo_consumidor);

    return 0;
}