#include <stdio.h>

//Faça um programa com um Menu em que o usuário possa escolher uma das
//quatro operações matemáticas para calcular. Receba dois números digitados pelo
//usuário e dependendo da opção que o usuário escolher, faça o cálculo.

int main(){

    float a, b;
    char opcao;

    printf("------- Calculadora -------\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    printf(
        "| + | - | * | / | Para sair -> 's'\n"
        "Escolha a opção: "
    );
    scanf(" %c", &opcao);

    switch(opcao){
        case '+': 
            printf("Resultado de %.2f + %.2f = %.2f\n", a, b, a+b);
            break;
        case '-': 
            printf("Resultado de %.2f - %.2f = %.2f\n", a, b, a-b);
            break;
        case '*': 
            printf("Resultado de %.2f * %.2f = %.2f\n", a, b, a*b);
            break;
        case '/': 
            printf("Resultado de %.2f / %.2f = %.2f\n", a, b, a/b);
            break;
        case 's': 
            return 0;
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}