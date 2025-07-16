#include <stdio.h>

void distancia(int dist[5][5]){
    int origem, destino;

    while(1){

        printf("Digite os pontos de origem e destino:");
        scanf("%d %d", &origem, &destino);

        if(origem == 0 && destino == 0){
            break;
        }

        printf("Distância entre cidade %d e cidade %d: %d km\n",
               origem, destino, dist[origem - 1][destino - 1]);
        
    }        
}

void tabelaSemRep(int dist[5][5]){
    printf("\nTabela de distâncias (sem repetições):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            printf("Cidade %d ↔ Cidade %d: %d km\n", i + 1, j + 1, dist[i][j]);
        }
    }
} 

void totalPercorrida(int dist[5][5]){
    int percurso[100];
    int n = 0;

    printf("\nDigite o percurso (cidades de 1 a 5, termine com 0): ");
    while (1) {
        int cidade;
        scanf("%d", &cidade);
        if (cidade == 0) break;

        percurso[n++] = cidade;
    }

    int total = 0;
    for (int i = 0; i < n - 1; i++) {
        int origem = percurso[i] - 1;
        int destino = percurso[i + 1] - 1;
        total += dist[origem][destino];
    }
    printf("Distância total do percurso: %d km\n", total);
}


int main() {

    int dist[5][5] =  {
        { 0, 15, 30,  5, 12 },
        {15,  0, 10, 17, 28 },
        {30, 10,  0,  3, 11 },
        { 5, 17,  3,  0, 80 },
        {12, 28, 11, 80,  0 }
        };


    distancia(dist);
    tabelaSemRep(dist);
    totalPercorrida(dist);

    return 0;
}