# Entrada e Saída Padrão em C

## Visão Geral
C oferece diversas funções para entrada e saída de dados, permitindo interação com o usuário e formatação de dados.

## Funções de Saída

### printf()
Escreve dados formatados na saída padrão
```c
int printf(const char *formato, ...);
```

#### Especificadores de Formato Comuns
| Especificador | Descrição | Exemplo |
|---------------|-----------|---------|
| `%d` ou `%i` | Inteiro decimal | `printf("%d", 10)` |
| `%f` | Ponto flutuante | `printf("%f", 3.14)` |
| `%c` | Caractere | `printf("%c", 'A')` |
| `%s` | String | `printf("%s", "texto")` |
| `%p` | Ponteiro | `printf("%p", ptr)` |
| `%x` ou `%X` | Hexadecimal | `printf("%x", 255)` |
| `%%` | Símbolo % | `printf("50%%")` |

#### Modificadores de Formato
| Modificador | Descrição | Exemplo |
|-------------|-----------|---------|
| `.n` | Precisão decimal | `printf("%.2f", 3.14159)` |
| `n` | Largura mínima | `printf("%5d", 42)` |
| `-` | Alinhamento à esquerda | `printf("%-10s", "texto")` |
| `0` | Preenchimento com zeros | `printf("%05d", 42)` |

### puts()
Escreve uma string seguida de quebra de linha
```c
int puts(const char *str);
```

## Funções de Entrada

### scanf()
Lê dados formatados da entrada padrão
```c
int scanf(const char *formato, ...);
```

```c
int idade;
float altura;

printf("Digite idade e altura: ");
scanf("%d %f", &idade, &altura);
```

### gets() e fgets()
Leem uma linha de texto
```c
// gets() (obsoleta, evite usar)
char nome[50];
gets(nome);  // Insegura, não limita tamanho

// fgets() (preferida)
char nome[50];
fgets(nome, sizeof(nome), stdin);
```

### getchar()
Lê um único caractere
```c
int c = getchar();
```

## Entrada e Saída com Arquivos
```c
fprintf(arquivo, "Nome: %s\n", nome);  // Escreve em arquivo
fscanf(arquivo, "%d", &idade);         // Lê de arquivo
```

## Manipulando o Buffer de Entrada
```c
// Limpar o buffer de entrada (após scanf)
while ((c = getchar()) != '\n' && c != EOF) { }

// Ou usando fflush (comportamento não definido pelo padrão C para stdin)
fflush(stdin);  // Comportamento dependente da implementação
```

## Exemplo Prático
```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    
    // Entrada básica
    printf("Digite seu nome: ");
    // Lê até encontrar nova linha (ou até 49 caracteres)
    fgets(nome, sizeof(nome), stdin);
    
    // Remove a quebra de linha capturada pelo fgets
    nome[strcspn(nome, "\n")] = 0;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    
    // Saída formatada
    printf("\n--- Informações ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    
    // Usando formatação avançada
    printf("\n--- Relatório ---\n");
    printf("| %-20s | %4d anos | %5.2f m |\n", nome, idade, altura);
    
    return 0;
}
```

## Pontos Importantes
1. Sempre use `&` com `scanf()` exceto para strings (arrays)
2. `scanf()` não consome a quebra de linha (`\n`)
3. `fgets()` captura a quebra de linha no final
4. `scanf()` pode causar buffer overflow sem limite de tamanho para strings
5. Use `sprintf()` para formatar texto em buffer de memória
6. O retorno de `scanf()`, `printf()` indica o número de itens processados