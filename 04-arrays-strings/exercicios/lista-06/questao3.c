#include <stdio.h>

#define MAX 5

void lerMatriz(int n, int matriz[n][n], char nome){
    printf("Digite os elementros da Matriz %c (%dx%d)\n", nome, n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

}

void mostrarMatriz(int n, int matriz[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaMatrizes(int n, int A[n][n], int B[n][n], int C[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int somaDiagonais(int n, int matriz[n][n]){
    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
            sum += matriz[i][j];    
            }
        }
    }

    return sum;
}

void multMatrizes(int n, int A[n][n], int B[n][n], int C[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = 0;
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {

    int tam;
    printf("Digite a dimensao das matrizes: ");
    scanf("%d", &tam);

    if (tam < 1 || tam > MAX) {
        printf("Dimensão inválida!\n");
        return 1;
    }
  
    int A[tam][tam], B[tam][tam];
    int soma[tam][tam];
    int produto[tam][tam];

    lerMatriz(tam, A, 'A');
    lerMatriz(tam, B, 'B');

    printf("\nMatriz A\n");
    mostrarMatriz(tam, A);
    printf("\nMatriz B\n");
    mostrarMatriz(tam, B);

    printf("\nSoma das matrizes\n");
    somaMatrizes(tam, A, B, soma);
    mostrarMatriz(tam, soma);

    printf("\nSoma das diagonais da Matriz A\n");
    printf("%d ", somaDiagonais(tam, A));
    printf("\n");
    printf("\nSoma das diagonais da Matriz B\n");
    printf("%d ", somaDiagonais(tam, B));
    printf("\n");

    printf("\nMultiplicação das matrizes\n");
    multMatrizes(tam, A, B, produto);
    mostrarMatriz(tam, produto);

    return 0;
}