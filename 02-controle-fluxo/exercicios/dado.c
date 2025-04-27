#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int dado = rand() % 6 + 1;
    printf("Você rodou um %d\n", dado);

    if(dado == 6){
        printf("Você tirou 6!\n");
    } else {
        printf("Tente novamente.\n");
    }

    return 0;
}