## Estruturas de Repetição

### while
```c
while (condição) {
    // código executado enquanto condição for verdadeira
}
```

### do-while
```c
do {
    // código executado pelo menos uma vez
    // e repetido enquanto condição for verdadeira
} while (condição);
```

### for
```c
for (inicialização; condição; incremento) {
    // código executado enquanto condição for verdadeira
}
```

## Comandos de Desvio

| Comando | Descrição |
|---------|-----------|
| `break` | Sai imediatamente do loop ou switch atual |
| `continue` | Pula para a próxima iteração do loop |
| `return` | Sai da função atual e opcionalmente retorna um valor |

## Exemplo Prático
```c
#include <stdio.h>

int main() {
    
    // Estrutura de repetição
    printf("Contagem regressiva: ");
    for (int i = 10; i > 0; i--) {
        printf("%d ", i);
        if (i == 5) {
            printf("(metade) ");
        }
    }
    printf("Fim!\n");
    
    return 0;
}
```

## Pontos Importantes
1. O loop `for` é ideal para iterações com contagem conhecida
2. O loop `while` é melhor para condições de saída não determinadas inicialmente

