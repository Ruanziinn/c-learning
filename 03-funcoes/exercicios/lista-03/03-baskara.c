#include <stdio.h>
#include <math.h>

//Faça uma função que recebe por parâmetro os valores necessários para o cálculo da
//fórmula de báskara e mostra, as suas raízes, caso seja possível calcular.

void baskara(float a, float b, float c){
    float r1, r2;
    float delta = pow(b, 2) - 4 * a * c;

    if(a == 0){
        printf("Não é equação do segundo grau devido a = 0\n");
    } else if(delta < 0){
        printf("Não existem raízes reais\n");    
    } else {
        r1 = (-b + sqrt(delta)) / (2.0 * a);
        r2 = (-b - sqrt(delta)) / (2.0 * a);

        printf( 
                "Raíz 1 = %.2f\n"
                "Raíz 2 = %.2f\n", r1, r2);
    } 
}

int main(){

    float a, b, c;

    printf("Digite os valores para calcular as raizes: ");
    scanf("%f%f%f", &a, &b, &c);

    baskara(a, b, c);

    return 0;
}