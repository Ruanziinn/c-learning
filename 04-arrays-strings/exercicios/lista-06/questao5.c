#include <stdio.h>

int somaPeoes(int tabuleiro[][8]){
    int sum = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tabuleiro[i][j] == 1){
                sum += tabuleiro[i][j];
            }
        }
    }
    return sum;
}

int somaBispos(int tabuleiro[][8]){
    int sum = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tabuleiro[i][j] == 4){
                sum += tabuleiro[i][j];
            }
        }
    }
    return sum;    
}

int ausenciaPecas(int tabuleiro[][8]){
    int aux = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tabuleiro[i][j] == 0){
                aux++;
            }
        }
    }
    return aux;    
}

void quantidadePecas(int tabuleiro[][8]){
    int p = 0, c = 0, t = 0, b = 0, reis = 0, rainha = 0; 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tabuleiro[i][j] == 1){
                p++;
            } else if(tabuleiro[i][j] == 2){
                c++;
            } else if(tabuleiro[i][j] == 3){
                t++;
            } else if(tabuleiro[i][j] == 4){
                b++;
            } else if(tabuleiro[i][j] == 5){
                reis++;
            } else if(tabuleiro[i][j] == 6){
                rainha++;
            }
        }
    }
    printf(
        "Peoes: %d\n"
        "Cavalos: %d\n"
        "Torres: %d\n"
        "Bispos: %d\n"
        "Reis: %d\n"
        "Rainhas: %d\n", p, c, t, b, reis, rainha
    ); 
}

int main(){

    int tabuleiro[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }    

    printf("Peoes: %d \n", somaPeoes(tabuleiro));
    printf("Bispos: %d \n", somaBispos(tabuleiro));
    printf("Ausencia: %d \n", ausenciaPecas(tabuleiro));

    printf("\n");
    quantidadePecas(tabuleiro);

    return 0;
}