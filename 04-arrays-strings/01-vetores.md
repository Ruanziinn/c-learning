# Arrays e Strings em C

## Visão Geral
Arrays são coleções de elementos do mesmo tipo armazenados sequencialmente na memória. Strings em C são arrays de caracteres terminados pelo caractere nulo '\0'.

## Arrays

### Declaração e Inicialização
```c
// Declaração
tipo nome[tamanho];
  
// Exemplos
int numeros[5];
float notas[10];

// Inicialização
int numeros[5] = {10, 20, 30, 40, 50};
float notas[] = {7.5, 8.0, 9.5}; // Tamanho definido automaticamente (3)
```

### Acesso aos Elementos
```c
numeros[0] = 15;  // Primeiro elemento (índices começam em 0)
int valor = numeros[2];  // Acessa o terceiro elemento
```

### Arrays Multidimensionais
```c
// Matriz 3x3
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Acesso ao elemento
int valor = matriz[1][2];  // Linha 1, coluna 2 (valor 6)
```

## Exemplo Prático
```c
#include <stdio.h>

int main() {
    // Arrays
    int notas[5] = {85, 92, 78, 90, 88};
    float soma = 0;
    
    // Processando um array
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    printf("Média das notas: %.2f\n", soma / 5);
    
    return 0;
}
```

## Pontos Importantes
1. Índices de arrays começam em 0
2. Não há verificação automática de limites; acessar além do tamanho causa problemas
3. Arrays são sempre passados por referência para funções
