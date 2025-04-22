# Tipos de Dados em C

## Visão Geral
A linguagem C possui tipos de dados primitivos que são fundamentais para programação eficiente. Entender esses tipos é essencial para gerenciar memória e realizar operações corretas.

## Tipos Básicos

### Inteiros
| Tipo | Bytes | Faixa (típica) | Uso comum |
|------|-------|----------------|-----------|
| `char` | 1 | -128 a 127 | Caracteres, números pequenos |
| `int` | 4 | -2.147.483.648 a 2.147.483.647 | Uso geral |
| `short` | 2 | -32.768 a 32.767 | Economia de memória |
| `long` | 4/8 | Depende da plataforma | Valores grandes |

### Ponto Flutuante
| Tipo | Bytes | Precisão | Uso |
|------|-------|----------|-----|
| `float` | 4 | ~7 dígitos | Decimais básicos |
| `double` | 8 | ~15 dígitos | Maior precisão |

### Modificadores
- `unsigned`: Apenas valores positivos (dobra o alcance máximo)
- `signed`: Permite valores negativos (padrão)

## Tipo Void
Representa ausência de tipo:
- Funções sem retorno: `void funcao()`
- Ponteiros genéricos: `void *ptr`

## Exemplo Prático
```c
#include <stdio.h>

int main() {
    int numero = 10;
    float decimal = 3.14;
    char letra = 'A';
    
    printf("Número: %d\n", numero);
    printf("Decimal: %.2f\n", decimal);
    printf("Long: ");
    printf("Letra: %c\n", letra);
    
    return 0;
}
```

## Pontos Importantes
1. Os tamanhos dos tipos podem variar entre sistemas
2. Ultrapassar limites causa overflow
3. Use `#include <limits.h>` para verificar limites dos tipos
4. Conversões entre tipos podem causar perda de dados
