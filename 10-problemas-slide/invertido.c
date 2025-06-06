#include <stdio.h>
int invertido(int x);
int main() {
int num, result;
printf("Digite um número com três algarismos, ex.: 256\n");
scanf("%d", &num);
invertido(num);
result = invertido(num);
printf("Invertido:\n");
printf("%d\n", result);

}
int invertido(int x) {

int unidade, dezena, centena, aux, invertido;
centena = x / 100;
aux = x % 100;
dezena = aux / 10;
unidade = aux % 10;
invertido = unidade * 100 + dezena * 10 + centena;
return invertido;

}