#include <stdio.h>

//Faça uma função que recebe, por parâmetro, a hora de início e a hora de término de um
//jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar,
//também por parâmetro, a duração do jogo em minutos, considerando que o tempo máximo
//de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no
//outro.

int calcularDuracao(int hInicio, int mInicio, int hFim, int mFim) {
    int inicio = hInicio * 60 + mInicio;
    int fim = hFim * 60 + mFim;
    int duracao;

    if (fim >= inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio) + fim;
    }

    return duracao;
}

int main() {
    int horaInicio, minInicio, horaFim, minFim;
    int duracao;

    printf("Digite a hora e minuto de início (hh mm): ");
    scanf("%d %d", &horaInicio, &minInicio);

    printf("Digite a hora e minuto de fim (hh mm): ");
    scanf("%d %d", &horaFim, &minFim);

    duracao = calcularDuracao(horaInicio, minInicio, horaFim, minFim);

    printf("Duração do jogo: %d minutos\n", duracao);

    return 0;
}