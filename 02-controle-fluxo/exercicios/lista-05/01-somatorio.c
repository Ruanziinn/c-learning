#include <stdio.h>

int main(){
    
    int N;
    int soma = 0;
    
    scanf("%d", &N);
    
    if(N >= 0 && N <= 500){
        for(int i = 0; i <= N; i++){
            soma += i;
        }
    }
    
    printf("%d", soma);

    return 0;
}