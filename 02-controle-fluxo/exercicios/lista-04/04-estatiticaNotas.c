#include <stdio.h>

//Estatística de notas - Faça um programa que lê uma quantidade qualquer de notas de 0 a 10 (não permitir fora
//desta faixa). Se o usuário digitar a nota -1, o programa deve mostrar quantas notas foram digitadas, a média e a
//quantidade com valor abaixo de 5. Para sair o usuário deve digitar S.


int main() {
   
    float nota, media;
    int qntNotas, soma, abaixo5;
    char s = 'N';

       while(s != 'S' && s != 's'){;
        soma = 0;
        qntNotas = 0;
        abaixo5 = 0;

        do{

        printf("Digite a nota: ");
        scanf("%f", &nota);
        
        if(nota >= 0 && nota <= 10){
            soma += nota;
            qntNotas++;
            if(nota < 5){
                abaixo5++;
            }
        } else if (nota != -1){
            printf("Nota Inválida!");
        }

        }while(nota != -1);

        if(qntNotas > 0){
            media = (float)soma / qntNotas;
            printf("Notas digitadas: %d\n", qntNotas);
            printf("Media: %.2f\n", media);
            printf("Notas abaixo de 5: %d\n", abaixo5);
        } else {
            printf("Quantidade de notas inválida!\n");
        }

        printf("Digite S para sair ou qualquer tecla para continuar: ");
        scanf(" %c", &s);

    }

    return 0;
}
