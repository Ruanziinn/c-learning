#include <stdio.h>

//Idade média - Um professor, após obter informações de uma turma, deseja saber a média de idade. Escrever um
//programa que lê as idades até que a idade lida seja zero, quando então é mostrada a média (o zero não é considerado
//para a média). Para sair do programa o usuário deve digitar S.

int main() {

    int idade;
    int soma, total;
    float media;
    char s = 'n';

    while(s != 's' && s != 'S'){
        soma = 0;
        total = 0;

        do{
            
            printf("Digite a idade: ");
            scanf("%d", &idade);

            if(idade > 0){
                soma += idade;
                total++;
            }

        }while(idade != 0); 

        if(total > 0){
            media = (float)soma / total;
            printf("Media de idade = %.2f\n", media);     
        } else {
            printf("Nenhuma idade válida.\n");    
        }

        printf("Digite S para sair ou qualquer tecla para continuar: ");
        scanf(" %c", &s);

    }
    
    return 0;
}