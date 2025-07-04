#include <stdio.h>

int main() {

    int N;
    int fat;
    scanf("%d", &N);

    for(fat = 1; N > 0; N--){
        fat = fat * N;
    }

    printf("%d\n", fat);

    return 0;
}