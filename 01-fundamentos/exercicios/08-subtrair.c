#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Digite dois números inteiros: ");
    scanf("%d%d", &num1, &num2);

    num3 = num2 - num1;

    printf("%d   %d\n-> %d <-\n", num1, num2, num3);
        
}