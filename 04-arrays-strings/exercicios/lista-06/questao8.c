#include <stdio.h>

int main() {

    int matriz[5][5];
    int transposta[5][5];

    printf("Digite os elementos da matriz:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }    

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz original:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}