#include <stdio.h>

//O critério de notas de uma faculdade consiste de uma nota de 0 a 10 em
//cada bimestre, sendo a primeira nota peso 2 e a segunda peso 3. Elabore um programa
//que lê as notas bimestrais e calcula a nota do semestre.

int main() {

    float nota1, nota2, notaFinal;

    printf("Digite a nota de cada bimestre: ");
    scanf("%f%f", &nota1, &nota2);

    notaFinal = (nota1 * 2.0 + nota2 * 3.0) / 5.0;

    printf("Nota final do semestre: %.2f\n", notaFinal);
    
    return 0;
}