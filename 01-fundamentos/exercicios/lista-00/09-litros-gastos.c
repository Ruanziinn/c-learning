#include <stdio.h>

//Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem,
//utilizando um automóvel que faz 12Km por litro. O programa deve apresentar os valores da
//velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros
//utilizada na viagem.

int main() {

    float velocidadeMedia, tempo, distancia, litros;
    
    printf("Digite a velocidade média do véiculo: ");
    scanf("%f", &velocidadeMedia);
    printf("Digite o tempo gasto na viagem: ");
    scanf("%f", &tempo);

    distancia = velocidadeMedia * tempo;
    litros = distancia / 12.0;

    printf(
        "\n"
        "Velocidade Média: %.2f km/h\n"
        "Tempo Gasto: %.2f horas\n"
        "Distância Percorrida: %.2f km\n"
        "Quantidade de Litros: %.2f litros\n",
        velocidadeMedia, tempo, distancia, litros);

}