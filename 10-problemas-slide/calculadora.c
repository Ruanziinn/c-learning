#include <stdio.h>

float calcular(float n1, float n2, char opcao){

    switch(opcao){
        case '+':
            return n1 + n2;
            break;
        case '-':
            return n1 - n2;
            break;
        case '*':
            return n1 * n2;
            break;
        case '/':
            return n1 / n2;
            break;
        default:
            return -1;
    }

}

int main(){

    float n1, n2, resultado;
    char opcao;

    printf("Digite os numeros: ");
    scanf("%f%f", &n1, &n2);

    printf("Digite a operacao: \n"
            "Soma -> +\n"
            "Subtracao -> -\n"
            "Multiplicacao -> *\n"
            "Divisao -> /\n");
    scanf(" %c", &opcao);

    resultado = calcular(n1, n2, opcao);
    
    if(resultado == -1){
        printf("Insira uma operacao valida.");
    } else {
        printf("Voce escolheu %c\n", opcao);
        printf("Resultado: %.2f\n", resultado);
    }
    
    
    return 0;
}