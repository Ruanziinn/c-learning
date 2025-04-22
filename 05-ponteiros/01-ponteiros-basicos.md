# Ponteiros em C

## Visão Geral
Ponteiros são variáveis que armazenam endereços de memória. Eles permitem manipulação direta da memória, alocação dinâmica e passagem de dados por referência.

## Conceitos Básicos

### Declaração de Ponteiros
```c
tipo *nome_variavel;

// Exemplos
int *ptr_int;     // Ponteiro para int
char *ptr_char;   // Ponteiro para char
float *ptr_float; // Ponteiro para float
```

### Operadores de Ponteiros
| Operador | Descrição |
|----------|-----------|
| `&` | Operador de endereço (retorna o endereço de uma variável) |
| `*` | Operador de dereferência (acessa o valor apontado) |

### Inicialização e Manipulação
```c
int num = 10;
int *ptr;

ptr = &num;  // ptr recebe o endereço de num

printf("Valor de num: %d\n", num);      // 10
printf("Endereço de num: %p\n", &num);  // Endereço na memória
printf("Valor de ptr: %p\n", ptr);      // Mesmo endereço de &num
printf("Valor apontado por ptr: %d\n", *ptr); // 10

*ptr = 20;  // Modifica o valor de num através do ponteiro
printf("Novo valor de num: %d\n", num); // 20
```

## Ponteiros e Arrays
Arrays e ponteiros estão intimamente relacionados em C:

```c
int numeros[5] = {10, 20, 30, 40, 50};
int *p = numeros;  // p aponta para o primeiro elemento

// Acessos equivalentes
printf("%d\n", numeros[0]);  // 10
printf("%d\n", *p);          // 10

// Aritmética de ponteiros
printf("%d\n", *(p + 2));    // 30 (terceiro elemento)
printf("%d\n", p[2]);        // 30 (notação de array com ponteiro)
```

## Ponteiros e Funções

### Passagem por Referência
```c
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    troca(&x, &y);  // Passa os endereços
    // Agora x=10 e y=5
    return 0;
}
```

## Exemplo Prático
```c
#include <stdio.h>

void incrementa_array(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i]++;  // arr[i] é equivalente a *(arr + i)
    }
}

int main() {
    int valores[5] = {10, 20, 30, 40, 50};
    
    printf("Array original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    
    incrementa_array(valores, 5);
    
    printf("\nArray modificado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    
    return 0;
}
```

## Pontos Importantes
1. Ponteiros não inicializados contêm valores aleatórios
2. Acessar memória não alocada via ponteiros causa comportamento indefinido
3. Ponteiro nulo (`NULL`) deve ser usado para indicar ponteiro inválido
4. Aritmética de ponteiros depende do tipo de dado (incrementa/decrementa pelo tamanho do tipo)
5. Use ponteiros com cuidado para evitar vazamentos de memória e erros de acesso