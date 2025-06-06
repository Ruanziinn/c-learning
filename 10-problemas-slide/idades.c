#include <stdio.h>

int verificarIdade(int idade){

    if(idade >= 18) return 1;
    else return 0;

}

int main(){

    int idade1, idade2, idade3, maior = 0, menor = 0;
    scanf("%d%d%d", &idade1, &idade2, &idade3);

    if(verificarIdade(idade1) == 1) maior++; else menor++;
    if(verificarIdade(idade2) == 1) maior++; else menor++;
    if(verificarIdade(idade3) == 1) maior++; else menor++;

    printf("Maiores de idade: %d\n", maior);
    printf("Menores de idade: %d\n", menor);

    return 0;
}