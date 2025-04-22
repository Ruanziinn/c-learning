# Funções em C

## Visão Geral
Funções são blocos de código reutilizáveis que executam tarefas específicas. Elas permitem organizar o código, evitar repetições e melhorar a legibilidade do programa.

## Estrutura Básica
```c
tipo_retorno nome_funcao(parametros) {
    // corpo da função
    return valor;  // opcional, depende do tipo_retorno
}
```

## Tipos de Função

### Função sem Retorno
```c
void saudacao() {
    printf("Olá, mundo!\n");
}
```

### Função com Retorno
```c
int soma(int a, int b) {
    return a + b;
}
```

### Função com Parâmetros
```c
float media(float a, float b, float c) {
    return (a + b + c) / 3;
}
```

## Protótipos de Função
Declarações de funções antes de sua implementação:
```c
// Protótipo
int calcula_area(int largura, int altura);

int main() {
    int area = calcula_area(5, 10);
    return 0;
}

// Implementação
int calcula_area(int largura, int altura) {
    return largura * altura;
}
```

## Passagem de Parâmetros

### Por Valor
O valor é copiado para a função
```c
void incrementa(int x) {  // x é uma cópia local
    x = x + 1;  // não afeta a variável original
}
```

### Por Referência (usando ponteiros)
A função recebe o endereço da variável
```c
void incrementa(int *x) {  // x é um ponteiro
    *x = *x + 1;  // modifica a variável original
}
```

## Exemplo Prático
```c
#include <stdio.h>

// Protótipos
float celsius_para_fahrenheit(float c);
void linha_separadora();

int main() {
    float temp_c = 25.0;
    float temp_f;
    
    temp_f = celsius_para_fahrenheit(temp_c);
    
    printf("%.1f°C equivale a %.1f°F\n", temp_c, temp_f);
    linha_separadora();
    
    return 0;
}

// Converte temperatura de Celsius para Fahrenheit
float celsius_para_fahrenheit(float c) {
    return (c * 9.0/5.0) + 32.0;
}

// Função sem retorno e sem parâmetros
void linha_separadora() {
    printf("-------------------------\n");
}
```

## Pontos Importantes
1. Funções devem ser declaradas antes de serem usadas
2. Parâmetros são locais à função (escopo local)
3. Uma função `void` não retorna valor
4. `return` finaliza a execução da função imediatamente
5. Funções podem chamar outras funções, inclusive a si mesmas (recursão)
