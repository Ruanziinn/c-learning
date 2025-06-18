#include <stdio.h>

char catNadador(int id){
    if(id >= 5 && id <= 7){
        return 'A';
    } else if(id >= 8 && id <= 10){
        return 'B';
    } else if(id >= 11 && id <= 13){
        return 'C';
    } else if(id >= 14 && id <= 17){
        return 'D';
    } else {
        return 'E';
    }
}

int main() {

    int idade, categoria;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    categoria = catNadador(idade);

    printf("Categoria do nadador: %c\n", categoria);

    return 0;
}