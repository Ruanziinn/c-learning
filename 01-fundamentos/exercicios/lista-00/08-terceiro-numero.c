#include <stdio.h>

//Faça um algoritmo que dados 2 números informe o terceiro de acordo com a regra definida
//na imagem

int main(){

	int a, b;
	int a_dezena, a_unidade, b_dezena, b_unidade;

	printf("Digite os dois numeros inteiros: ");
	scanf("%d%d", &a, &b);

	a_dezena = a / 10;
	a_unidade = a % 10;

	b_dezena = b / 10;
	b_unidade = b % 10;

	printf("Terceiro numero: %d", a_dezena + a_unidade + b_dezena + b_unidade); 

	return 0;
}