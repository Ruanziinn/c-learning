#include <stdio.h>

int main() {

    int aux = 0;
    int N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int num[N];

    printf("Digite os numeros que deseja ordernar: ");

    for(int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(num[i] > num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}