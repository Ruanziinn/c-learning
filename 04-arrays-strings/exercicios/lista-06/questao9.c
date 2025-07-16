#include <stdio.h>

int main() {
    
    int n, m, k = 0;

    printf("Digite as linhas e colunas da Matriz: ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int vetor[n * m];
    
    printf("Digite os elementos da Matriz (%dx%d)\n", n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz (%dx%d)\n", n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTransformando Matriz em Vetor\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vetor[k++] = matriz[i][j];
        }
    }

    for(int i = 0; i < n * m; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

     return 0;

}