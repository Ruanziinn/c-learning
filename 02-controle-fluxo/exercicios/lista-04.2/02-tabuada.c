#include <stdio.h>

int main(){
    
    int N;
    int i = 0;
    
    scanf("%d", &N);
    
    while(i <= 10){
        
        printf("%d x %d = %d\n", N, i, N * i);
        
        i++;
    }

    return 0;
}