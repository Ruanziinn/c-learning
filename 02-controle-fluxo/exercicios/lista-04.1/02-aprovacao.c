#include <stdio.h>

//Aprovação - Elaborar programa que lê 10 notas (de 0 a 10, com uma casa decimal), e informa se o aluno passou na
//disciplina, repetindo o ciclo até que o usuário digite S para sair. O aluno passa quando tira média igual ou maior
//que 7.

int main() {

    float notas[10];
    float media, soma = 0;
    char s;

    while(s != 'S' && s != 's'){;
        soma = 0;

        for(int i = 0; i < 10; i++){
            printf("Digite a nota %d : ", i + 1);
            scanf("%f", &notas[i]);
            soma += notas[i];
        }

        media = soma / 10.0;
        printf("Media = %.1f\n", media);
        
        if(media >= 7.0){
            printf("Aluno APROVADO!\n");
        } else {
            printf("Aluno REPROVADO!\n");
        }

        printf("Digite S para sair ou qualquer tecla para continuar: ");
        scanf(" %c", &s);

    }

    return 0;
}