#include <stdio.h>
#include <math.h>

//Faça um programa que dado o vetor unidimensional [2; 4; 35; 50; 23; 17; 9; 12; 27; 5] retorne:
//maior valor
//média dos valores
//os valores dispostos em ordem crescente
//subconjunto de valores primos que está contido no vetor

int maiorValor(int vetor[], int tamanho){
    int i;
    int maior;

    maior = vetor[0];
    for(i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    return maior;
}

float mediaValores(int vetor[], int tamanho){
    int i;
    float sum = 0;
    float media;

    for(i = 0; i < tamanho; i++){
        sum += vetor[i];
    }

    return (float)sum / tamanho;

}

void ordemCrescente(int vetor[], int tamanho){
    int i, j;
    int aux = 0;
    for(i = 0; i < tamanho - 1; i++){
        for(j = i + 1; j < tamanho; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int ehPrimo(int num){
    
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1;

}


int main() {

    int tamanho, maior;
    float media;

    int vetor[10] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    
    tamanho = sizeof(vetor) / sizeof(vetor[0]);

    maior = maiorValor(vetor, tamanho);
    media = mediaValores(vetor, tamanho);

    printf("Maior valor: %d\n", maior);
    printf("Media: %.2f\n", media);

    ordemCrescente(vetor, tamanho);

    printf("\n");
    for(int k = 0; k < tamanho; k++){
        if(ehPrimo(vetor[k]) == 1){
            printf("%d ", vetor[k]);
        } else {
            continue;
        }
        
    } 
    printf("\n");

    return 0;
}