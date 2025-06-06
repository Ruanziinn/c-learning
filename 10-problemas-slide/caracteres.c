#include <stdio.h>

int main(){

    char char1, char2, char3;
    int vogal = 0;
    int consoante = 0;
    scanf("%c %c %c", &char1, &char2, &char3);

    printf("Letra %c\n", char1);
    if(char1 >= 97 && char1 <= 122 || char1 >= 65 && char1 <= 90){
        if(char1 == 'a' || char1 == 'e' || char1 == 'i' || char1 == 'o' || char1 == 'u'){
            printf("É vogal.\n");
            vogal++;
        } else {
           printf("É consoante.\n");
        consoante++; 
        }
    } else {
        printf("Não é letra do alfabeto.\n");
    }

     printf("Letra %c\n", char2);
    if(char2 >= 97 && char2 <= 122 || char2 >= 65 && char2 <= 90){
        if(char2 == 'a' || char2 == 'e' || char2 == 'i' || char2 == 'o' || char2 == 'u'){
            printf("É vogal.\n");
            vogal++;
        } else {
           printf("É consoante.\n");
        consoante++; 
        }
    } else {
        printf("Não é letra do alfabeto.\n");
    }

     printf("Letra %c\n", char3);
    if(char3 >= 97 && char3 <= 122 || char3 >= 65 && char3 <= 90){
        if(char3 == 'a' || char3 == 'e' || char3 == 'i' || char3 == 'o' || char3 == 'u'){
            printf("É vogal.\n");
            vogal++;
        } else {
           printf("É consoante.\n");
        consoante++; 
        }
    } else {
        printf("Não é letra do alfabeto.\n");
    }

    printf("Consoantes: %d\n", consoante);
    printf("Vogais: %d\n", vogal);

    return 0;
}