#include <stdio.h>

void listarVetor(int vetor[]){
    for(int i = 0; i < 7; i++){
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    }
}

int buscarElemento(int vetor[], int aux){

    for(int i = 0; i < 7; i++){
        if(vetor[i] == aux){
            return i + 1;
        }
    }
    return -1;
}

void trocarValores(int vetor[]){
    int vetorAux[7];
    vetorAux[0] = vetor[0]; 

    for(int i = 1; i < 7; i++){
        vetorAux[i] = vetorAux[i - 1] + vetor[i];

    }
    
    for (int i = 0; i < 7; i++) {
        vetor[i] = vetorAux[i];
    }

}

int main() {

    int vetor[7];
    int opcao;

    for(int i = 0; i < 7; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    do{
        printf(
            "1 - Listar vetor\n"
            "2 - Buscar elemento\n"
            "3 - Trocar valores\n"
            "0 - Para sair\n"
        );
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1: {
                printf("\nListando vetor...\n");
                listarVetor(vetor);
                break;
            }
            case 2: {
                int aux;
                int result;
                printf("\nBuscar elemento\nDigite: ");
                scanf("%d", &aux);
                result = buscarElemento(vetor, aux);

                if(result == -1){
                    printf("Valor nao encontrado.\n");
                } else {
                    printf("Posicao do elemento: %d\n", result);
                }
                break;
            }
            case 3: {
                printf("\nVetor com valores trocados\n");
                trocarValores(vetor);
                listarVetor(vetor);
                printf("\n");
                break;
            }
            case 0: {
                printf("Encerrando o programa...\n");
                return 0;
            }    
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
        
    }while(1);

    return 0;
}