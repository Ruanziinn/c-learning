#include <stdio.h>
//Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida
//a distância total percorrida pelo automóvel e o total de combustível gasto.

int main() {

    float dist_total, comb_total, consumo_medio;

    printf("Digite a distância total percorrida: \n");
    scanf("%f", &dist_total);
    printf("Digite o total de combustível gasto: \n");
    scanf("%f", &comb_total);

    consumo_medio = dist_total / comb_total;

    printf("O consumo médio de combustível do automóvel: %.2f\n", consumo_medio);

    return 0;
}