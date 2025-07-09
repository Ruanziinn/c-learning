#include <stdio.h>
#include <math.h>

//Apresentar as potências de x, variando de 0 a 9. Deve ser considerado que qualquer número elevado a
//zero é 1, e elevado a 1 é ele mesmo. x é fornecido pelo usuário.

int main(){
    
    int N;
    int soma = 0;
    
    scanf("%d", &N);
    
    if(N >= 0 && N <= 9){
        for(int i = 0; i <= N; i++){
            printf("%d ^ %d = %.1f\n", N, i, pow(N, i));
        }
    } else {
        printf("Numero fora de intervalo.");
    }

    return 0;
}