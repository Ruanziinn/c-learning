#include <stdio.h>

//Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$) de um
//valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também
//a quantidade de dólares disponíveis com o usuário.

int main() {

    float cotacao_dolar, quantidade_dolar, valor_real;

    printf("Digite a atual cotação do dólar: ");
    scanf("%f", &cotacao_dolar);
    printf("Digite a quantidade de dólar: ");
    scanf("%f", &quantidade_dolar);

    valor_real = cotacao_dolar * quantidade_dolar;

    printf("Valor convertido para R$: %.2f\n", valor_real);

    return 0;
}