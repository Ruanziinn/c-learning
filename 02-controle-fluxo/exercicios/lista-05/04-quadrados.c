#include <stdio.h>

int main() {

    int N;
    int soma = 0;
    
    scanf("%d", &N);
    
    if(N >= 15 && N <= 180){
        for(int i = 0; i <= N; i++){
            printf("%d = %d\n", i, i * i);
        }
    } else {
        printf("Numero fora de intervalo.");
    }

    return 0;
}