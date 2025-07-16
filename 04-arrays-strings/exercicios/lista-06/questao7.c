#include <stdio.h>

int main() {

    int idade, opiniao;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int maiorOtimo = 0, maiorRuim = 0, maiorPessimo = 0;
    int somaRuim = 0;
    int total = 0;


    for(int i = 1; i <= 4; i++){
        printf("Pessoa %d:\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf(
            "Opinião:\n"
            "1 - Ótimo\n"
            "2 - Bom\n"
            "3 - Regular\n"
            "4 - Ruim\n"
            "5 - Péssimo\n"
        );

        scanf("%d", &opiniao);

        switch(opiniao){
            case 1:
                otimo++;
                if(idade > maiorOtimo){
                    maiorOtimo = idade;
                }
                break;
            case 2:
                bom++;
                break;
            case 3:
                regular++;
                break;
            case 4:
                ruim++;
                somaRuim += idade;
                if(idade > maiorRuim){
                    maiorRuim = idade;
                }
                break;
            case 5:
                pessimo++;
                if(idade > maiorPessimo){
                    maiorPessimo = idade;
                }
                break;  
            default:
                printf("Opiniao Invalida.\n");
                i--;          
        }
        total++;
        printf("\n");
    }

    printf("Quantidade de Respostas Ótimo: %d\n", otimo);

    if(total > 0)
        printf("Diferença percentual entre respostas bom e regular: %.2f\n", ((float)(bom - regular) / total) * 100);

    if(ruim > 0)    
        printf("Média de idade das pessoas que responderam ruim: %.2f\n", (float) somaRuim / ruim);

    if(total > 0)
        printf("Porcentagem de respostas péssimo e a maior idade: %.2f%% - %d\n", ((float)pessimo / total) * 100, maiorPessimo);
    
    printf("Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d\n", maiorOtimo - maiorRuim);
    return 0;
}