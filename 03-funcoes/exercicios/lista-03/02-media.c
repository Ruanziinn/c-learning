#include <stdio.h>

//Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a
//letra for A a função calcula a média aritmética das notas do aluno, se for P, a sua média
//ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada também
//deve retornar por parâmetro.

float media(char response, float n1, float n2, float n3){
    if(response == 'A') return (n1 + n2 + n3) / 3.0;
    else if(response == 'P') return (n1 * 5.0 + n2 * 3.0 + n3 * 2.0) / 10.0;
    else if(response == 'H'){
        if (n1 == 0 || n2 == 0 || n3 == 0) 
            return -1;
        return 3.0 / ((1/n1) + (1/n2) + (1/n3));
    } 
    else return -1;
}

int main(){

    float nota1, nota2, nota3, resultado;
    char tipoMedia;

    printf("Digite as três notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    printf(
            "A - Média aritmética\n"
            "P - Média ponderada\n"
            "H - Média harmônica\n"
            "Digite o tipo de média: ");
    scanf(" %c", &tipoMedia);

    resultado = media(tipoMedia, nota1, nota2, nota3);

    if(resultado < 0) printf("Error\n");
    else printf("Media calculada: %.2f\n", resultado);
    
    return 0;
}