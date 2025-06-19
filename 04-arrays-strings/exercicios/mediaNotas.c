#include <stdio.h>

int main() {

    float notas[8][5];
    float soma = 0.0;
    float mediaGeral;

    for(int i = 0; i < 8; i++){
        soma = 0.0;
        printf("Digite as notas do aluno %d\n", i + 1);
        for(int j = 0; j < 4; j++){
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        notas[i][4] = soma / 4;
    }

    for(int i = 0; i < 8; i++){
        soma = 0.0;
        printf("Notas aluno %d\n", i + 1);
        for(int j = 0; j < 4; j++){
            printf("%.1f ", notas[i][j]);
        }
        printf("Media: %.1f\n", notas[i][4]);
    }

    soma = 0.0;
    for(int i = 0; i < 8; i++){
        soma += notas[i][4];
    }

    mediaGeral = soma / 8.0;

    printf("Media Geral: %.1f\n", mediaGeral);

    return 0;
}