#include <stdio.h>

//Receba dois números e mostre qual é o maior.

int main() {

    int a, b;
    
    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);

    if(a > b){
        printf ("O maior número é o %d\n", a);
    } else if (b > a){
        printf ("O maior número é o %d\n", b);
    } else {
        printf("Os números são iguais\n");
    }

    return 0;
}