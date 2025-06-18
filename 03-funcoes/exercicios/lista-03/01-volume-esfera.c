#include <stdio.h>
#include <math.h>

//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume
//(V = 4/3 π r3). 

#define PI 3.14

float volumeEsfera(float r){
    return (4.0/3.0) * PI * pow(r, 3.0);
}

int main(){

    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = volumeEsfera(raio);

    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}
