#include <stdio.h>

int main() {

    const float assinatura = 49.90;
    const float adicionalDados = 20.00;
    const float ligacoesInter = 1.50;
    const float streamingA = 15.00;
    const float streamingB = 25.00;
    const float streamingC = 30.00;

    int dados;
    float total, minutosInter = 0;
    char option, A, B, C;

    printf("==== CONTA TELEFÔNICA ====\n");
    printf("Quantos pacotes de dados adicionais de 5GB você usou? ");
    scanf("%d", &dados);

    printf("Você usou o serviço de ligações internacionais? (s/n) ");
    scanf(" %c", &option);
    if(option == 's'){
        int aux;
        printf("Quantos minutos de ligações você utilizou? ");
        scanf("%d", &aux);
        minutosInter = aux * ligacoesInter;
    }

    printf("\nServiços de Streaming\n");
    printf("Você usou a Plataforma A (s/n)? ");
    scanf(" %c", &A);

    printf("Você usou a Plataforma B (s/n)? ");
    scanf(" %c", &B);

    printf("Você usou a Plataforma C (s/n)? ");
    scanf(" %c", &C);

    total = assinatura;
    total += dados * adicionalDados;
    total += minutosInter;

    if (A == 's') total += streamingA;
    if (B == 's') total += streamingB;
    if (C == 's') total += streamingC;

    printf("\nValor total da conta: R$ %.2f\n", total);

    return 0;
}