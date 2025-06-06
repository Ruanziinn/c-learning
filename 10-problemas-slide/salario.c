#include <stdio.h>

float mediaSalario(float s1, float s2, float s3){
    return (s1 + s2 + s3) / 3;
}

float encontrarMaior(float s1, float s2, float s3){
    float maior = s1;
    if(s2 > maior) maior = s2;
    if(s3 > maior) maior = s3;
    return maior;
}

float encontrarMenor(float s1, float s2, float s3){
    float menor = s1;
    if(s2 < menor) menor = s2;
    if(s3 < menor) menor = s3;
    return menor;
}

int main()
{
    float salary1, salary2, salary3, menor, maior, media;
    scanf("%f%f%f", &salary1, &salary2, &salary3);
    
    media = mediaSalario(salary1, salary2, salary3);
    maior = encontrarMaior(salary1, salary2, salary3);
    menor = encontrarMenor(salary1, salary2, salary3);

    printf("Maior salario: %.2f\n", maior);
    printf("Menor salario: %.2f\n", menor);
    printf("Media dos salarios: %.2f\n", media);
    
    return 0;
}