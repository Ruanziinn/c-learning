# Estruturas de Controle em C

## Visão Geral
As estruturas de controle permitem alterar o fluxo de execução de um programa, possibilitando tomada de decisões e repetições de código.

## Estruturas Condicionais

### if-else
```c
if (condição) {
    // código executado se condição for verdadeira
} else {
    // código executado se condição for falsa
}
```

### if-else if-else
```c
if (condição1) {
    // código executado se condição1 for verdadeira
} else if (condição2) {
    // código executado se condição1 for falsa e condição2 verdadeira
} else {
    // código executado se todas as condições anteriores forem falsas
}
```

### switch-case
```c
switch (expressão) {
    case valor1:
        // código se expressão == valor1
        break;
    case valor2:
        // código se expressão == valor2
        break;
    default:
        // código se nenhum caso anterior for satisfeito
}
```

## Exemplo Prático
```c
#include <stdio.h>

int main() {
    int nota;
    
    printf("Digite a nota (0-100): ");
    scanf("%d", &nota);
    
    // Estrutura condicional
    if (nota >= 90) {
        printf("Conceito A\n");
    } else if (nota >= 80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else if (nota >= 60) {
        printf("Conceito D\n");
    } else {
        printf("Conceito F\n");
    }
    
    return 0;
}
```
## Pontos Importantes
1. Em C, qualquer valor diferente de zero é considerado verdadeiro
2. Use `{}` mesmo para blocos de uma única instrução (boa prática)
3. Não esqueça o `break` nos cases do switch para evitar execução em cascata

