## Strings

Strings em C são arrays de caracteres terminados pelo caractere nulo '\0'.

### Declaração e Inicialização
```c
// Declarações equivalentes
char nome[20] = "Maria";
char nome[] = "Maria";  // Tamanho calculado automaticamente (5+1)
char nome[] = {'M', 'a', 'r', 'i', 'a', '\0'};  // '\0' é o terminador
```

### Funções Comuns para Strings
| Função | Descrição | Exemplo |
|--------|-----------|---------|
| `strlen(str)` | Retorna o comprimento | `int len = strlen(nome);` |
| `strcpy(dest, src)` | Copia uma string | `strcpy(dest, src);` |
| `strcat(dest, src)` | Concatena strings | `strcat(str1, str2);` |
| `strcmp(s1, s2)` | Compara strings | `if (strcmp(s1, s2) == 0)` |
| `strncpy(dest, src, n)` | Copia n caracteres | `strncpy(dest, src, 5);` |

## Exemplo Prático
```c
#include <stdio.h>
#include <string.h>

int main() {
    
    // Strings
    char nome[50];
    char sobrenome[50] = "Silva";
    
    // Entrada de dados
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);  // Não use & com strings
    
    // Processando strings
    printf("Nome completo: ");
    printf("%s %s\n", nome, sobrenome);
    printf("Tamanho do nome: %lu letras\n", strlen(nome));
    
    return 0;
}
```

## Pontos Importantes
1. Strings devem sempre ter espaço para o caractere nulo no final
2. Use `#include <string.h>` para acessar funções de manipulação de strings