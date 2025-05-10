#include <stdio.h>

//Implemente um programa que lê três valores e calcule a média
//ponderada para pesos 1, 2 e 3, respectivamente (multiplique cada nota pelo seu peso,
//some os produtos e divida o resultado pela soma dos pesos).

int main(){

    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 * 1 + n2 * 2 + n3 * 3) / (1 + 2 + 3);

    printf("Média ponderada: %.2f\n", media);

    return 0;
}