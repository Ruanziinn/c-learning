#include <stdio.h>

int main() {

    int a, b;

    //Input
    printf("Entre com o valor 1: ");
    scanf("%d", &a);
    printf("Entre com o valor 2: ");
    scanf("%d", &b);
    
    //Output
    //a+b -> Processamento somando diretamente as duas variáveis
    printf("A soma de %d + %d = %d\n", a, b, a+b);

    
    //Extra
    printf("Quer ver a referencia da memoria onde estao alocadas as variaveis? y/n -> ");
    char aux;
    scanf(" %c", &aux);

    if(aux == 'y'){
        printf("Valor 1 = %p \nValor 2 = %p \n", &a, &b);
    } else {
        printf(":D\n");
    }

    return 0;
}