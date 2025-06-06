#include <stdio.h>

int parOuImpar(int num){

    if(num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){

    int num1, num2, num3, num4, impar = 0, par = 0;
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if(parOuImpar(num1)) par++; else impar++;
    if(parOuImpar(num2)) par++; else impar++;
    if(parOuImpar(num3)) par++; else impar++;
    if(parOuImpar(num4)) par++; else impar++;

    printf("%d Impar\n", impar);
    printf("%d Par\n", par);

    return 0;
}