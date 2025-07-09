#include <stdio.h>

int main(){
    
    int N;
    int soma = 0;
    
    scanf("%d", &N);
    
    if(N >= 0 && N <= 200){
        for(int i = 0; i <= N; i++){
            if(i % 4 == 0){
                printf("%d\n", i);
            }
        }
    }

    return 0;
}