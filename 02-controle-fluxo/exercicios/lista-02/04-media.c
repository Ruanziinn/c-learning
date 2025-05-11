#include <stdio.h>

//Faça um programa que receba 2 notas de um aluno, calcule a média e mostre se
//ele reprovou ou não (A média da escola é 6,0).

int main() {

    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2.0;

    if(media >= 6.0){
        printf("Aluno aprovado com média %.2f\n", media);
    } else {
        printf("Aluno reprovado com média %.2f\n", media);
    }
    
    return 0;
}