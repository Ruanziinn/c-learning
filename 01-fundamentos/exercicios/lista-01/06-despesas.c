#include <stdio.h>

int main() {

    float marido, esposa, total;
    float valorDevido, percMarido, percEsposa;
    float saldoMarido, saldoEsposa;
    
    printf("Digite o valor total pago pelo marido: ");
    scanf("%f", &marido);
    printf("Digite o valor total pago pela esposa: ");
    scanf("%f", &esposa);

    total = marido + esposa;
    percMarido = (marido / total) * 100;
    percEsposa = (esposa / total )* 100;
    valorDevido = total / 2;
    saldoMarido = marido - valorDevido;
    saldoEsposa = esposa - valorDevido; 

    printf("\n%-20s %-10s %-10s %-10s\n", "ITEM", "MARIDO", "ESPOSA", "TOTAL");
    printf("%-20s %-10.2f %-10.2f %-10.2f\n", "DESPESAS PAGAS", marido, esposa, total);
    printf("%-20s %-10.2f %-10.2f %-10.2f\n", "%% PAGO", percMarido, percEsposa, 100.0);
    printf("%-20s %-10.2f %-10.2f %-10.2f\n", "VALOR DEVIDO", valorDevido, valorDevido, total);
    printf("%-20s %-10.2f %-10.2f\n\n", "SALDO", saldoMarido, saldoEsposa);
    

    if(saldoMarido > 0){
        printf("A esposa deve pagar R$ %.2f ao marido.\n", saldoMarido);
    } else if(saldoEsposa > 0){
        printf("O marido deve pagar R$ %.2f a esposa.\n", saldoEsposa);
    } else {
        printf("Nenhum deve ao outro.\n");
    }

    return 0;
}