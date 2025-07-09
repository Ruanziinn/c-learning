#include <stdio.h>

//Faça um programa que junte os 3 exercícios acima. Ele repetidamente oferece um menu com a opção
//0 para terminar e outras 3 opções 1, 2 e 3, cada uma correspondendo a um tipo de figura. Caso a opção indicada
//pelo usuário seja inválida, é mostrada uma mensagem apropriada. Em todos os casos exceto 0 o menu é oferecido
//novamente.

void caractereProg(int linhas, char caractere){

        for(int i = 1; i <= linhas; i++){
            for(int j = 1; j <= i * 2; j++){
                printf("%c ", caractere);
            }
            printf("\n");
        }
}

void piramide(int linhas, char caractere){

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= linhas - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++){
            printf("%c", caractere);
        }
        printf("\n");
    }
}

void matriz(int lin, int col, char caractere){

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%c ", caractere);
        }
        printf("\n");
    }
}

int main() {

    int opcao;
    int linhas, colunas;
    char caractere;

    while(1){

         printf(
        "----------=> MENU <=----------\n"
        "1 -> Caracteres Progressivos\n"
        "2 -> Piramide\n"
        "3 -> Matriz\n"
        "Digite a opcao desejada: "
        );
        scanf("%d", &opcao);

        if(opcao == 0){
            break;
        }

        printf("Digite o caractere que deseja preencher os desenhos: ");
        scanf(" %c", &caractere);

        switch(opcao){
            case 1:
                printf("Digite o numero de linhas: ");
                scanf("%d", &linhas);

                caractereProg(linhas, caractere);
                break;
            case 2:
                printf("Digite o numero de linhas: ");
                scanf("%d", &linhas);

                piramide(linhas, caractere);
                break;
            case 3:
                printf("Digite o numero de linhas: ");
                scanf("%d", &linhas);
                printf("Digite o numero de colunas: ");
                scanf("%d", &colunas);

                matriz(linhas, colunas, caractere);
                break;
            default:
                printf("Digite uma opcao valida!\n");
        }

    }

    return 0;
}