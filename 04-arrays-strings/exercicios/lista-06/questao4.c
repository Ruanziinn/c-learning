#include <stdio.h>

int main() {

    int N;
    int aux = 0;

    do{
        printf("Digite a dimensao do vetor: ");
        scanf("%d", &N);

    }while(N > 20);

    int vetor[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor:\n");
    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}