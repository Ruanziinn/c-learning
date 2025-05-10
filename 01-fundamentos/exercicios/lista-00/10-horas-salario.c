#include <stdio.h>

//Faça um algoritmo que dados o valor da hora trabalhada, o percentual de descontos e as
//horas trabalhadas por um funcionário, apresente os valores de: Horas trabalhadas, Salário
//Bruto, Desconto, Salário Líquido.

int main() {

    float valorHora, horas, percentualDesc;
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesc);
    
    salarioBruto = valorHora * horas;
    desconto = salarioBruto * (percentualDesc / 100.0);
    salarioLiquido = salarioBruto - desconto;

    printf(
        "\n"
        "Horas trabalhadas: %.2f\n"
        "Salário Bruto: R$ %.2f\n"
        "Desconto: R$ %.2f\n"
        "Salário Líquido: R$ %.2f\n",
        horas, salarioBruto, desconto, salarioLiquido
    );

}