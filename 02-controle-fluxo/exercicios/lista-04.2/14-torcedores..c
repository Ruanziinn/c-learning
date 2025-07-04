#include <stdio.h>

//Uma empresa de pesquisa resolveu entrevistar os torcedores do estado do Rio de Janeiro para saber
//qual a maior torcida. Fazer um programa que leia um número não conhecido de respostas do time que
//torce: N para Fluminense, M para Flamengo, V para Vasco, B para Botafogo ou O para Outros. O
//programa deve encerrar quando for digitado R - Resultado. Escrever ao final o total de torcedores
//entrevistados, a quantidade de entrevistados por time e a porcentagem em relação ao total.

int main() {

    int Flu = 0, Fla = 0, Vas = 0, Bot = 0;
    int total = 0;
    char voto; 
 
    
    while(1){
        
        printf("Digite o seu voto: ");
        scanf(" %c", &voto);
        
        if(voto == 'R'){
            break;
        }
        
        switch(voto){
            case 'N':
                Flu++;
                break;
            case 'M':
                Fla++;
                break;
            case 'V':
                Vas++;
                break;
            case 'B':
                Bot++;
                break;
            default:
                printf("Digite uma opcao valida.");
        }
        
        total++;
        
    }
    
    printf("Fluminense: %d - %.2f\n", Flu, (float)Flu/total*100);
    printf("Flamengo: %d - %.2f\n", Fla, (float)Flu/total*100);
    printf("Vasco: %d - %.2f\n", Vas, (float)Flu/total*100);
    printf("Botafogo: %d - %.2f\n", Bot, (float)Flu/total*100);
    printf("Total: %d\n", total);
        

    return 0;
}