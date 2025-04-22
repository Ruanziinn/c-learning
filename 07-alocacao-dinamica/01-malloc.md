# Alocação Dinâmica de Memória em C

## Visão Geral
A alocação dinâmica permite solicitar memória durante a execução do programa, criando estruturas de tamanho variável conforme necessário.

## Funções de Alocação
| Função | Descrição | Biblioteca |
|--------|-----------|------------|
| `malloc()` | Aloca bloco de memória não inicializado | `<stdlib.h>` |
| `calloc()` | Aloca bloco e inicializa com zeros | `<stdlib.h>` |
| `realloc()` | Redimensiona bloco alocado | `<stdlib.h>` |
| `free()` | Libera memória alocada | `<stdlib.h>` |

## Uso Básico

### malloc()
```c
void *malloc(size_t tamanho);

// Exemplo
int *ptr = (int *)malloc(5 * sizeof(int));  // Aloca espaço para 5 inteiros
```

### calloc()
```c
void *calloc(size_t num_elementos, size_t tamanho_elemento);

// Exemplo
int *ptr = (int *)calloc(5, sizeof(int));  // Aloca e inicializa 5 inteiros com zero
```

### realloc()
```c
void *realloc(void *ptr, size_t novo_tamanho);

// Exemplo
ptr = (int *)realloc(ptr, 10 * sizeof(int));  // Redimensiona para 10 inteiros
```

### free()
```c
void free(void *ptr);

// Exemplo
free(ptr);  // Libera a memória alocada
ptr = NULL; // Boa prática: evita uso após liberação
```

## Verificação de Alocação
Sempre verifique se a alocação foi bem-sucedida:
```c
int *numeros = (int *)malloc(100 * sizeof(int));
if (numeros == NULL) {
    printf("Erro: memória insuficiente!\n");
    return 1;
}
```

## Arrays Dinâmicos
```c
// Array dinâmico de inteiros
int tamanho = 10;
int *array = (int *)malloc(tamanho * sizeof(int));

// Preenchendo o array
for (int i = 0; i < tamanho; i++) {
    array[i] = i * 10;
}

// Ampliando o array
tamanho = 20;
array = (int *)realloc(array, tamanho * sizeof(int));

// Liberando memória
free(array);
```

## Estruturas Dinâmicas
```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

// Alocando uma estrutura
Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
strcpy(p->nome, "Carlos");
p->idade = 25;

// Liberando memória
free(p);
```

## Exemplo Prático
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *numeros;
    int quantidade, i;
    
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &quantidade);
    
    // Alocação dinâmica
    numeros = (int *)malloc(quantidade * sizeof(int));
    
    if (numeros == NULL) {
        printf("Erro: falha na alocação de memória\n");
        return 1;
    }
    
    // Leitura dos valores
    for (i = 0; i < quantidade; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    // Exibindo valores
    printf("\nNúmeros digitados:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%d ", numeros[i]);
    }
    
    // Liberando memória
    free(numeros);
    return 0;
}
```

## Pontos Importantes
1. Toda memória alocada deve ser liberada com `free()` para evitar vazamentos
2. Nunca use `free()` em memória não alocada com `malloc()`, `calloc()` ou `realloc()`
3. Sempre verifique se a alocação teve sucesso antes de usar o ponteiro
4. Após liberar memória, atribua NULL ao ponteiro para evitar "uso após liberação"
5. Acessar memória após liberá-la causa comportamento indefinido