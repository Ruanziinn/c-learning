# Manipulação de Arquivos em C

## Visão Geral
C permite operações de leitura e escrita em arquivos através de funções da biblioteca padrão, facilitando o armazenamento e recuperação de dados.

## Estrutura de Arquivo
O tipo `FILE` representa um arquivo em C:
```c
FILE *arquivo;  // Ponteiro para arquivo
```

## Funções Básicas
| Função | Descrição | Biblioteca |
|--------|-----------|------------|
| `fopen()` | Abre um arquivo | `<stdio.h>` |
| `fclose()` | Fecha um arquivo | `<stdio.h>` |
| `fprintf()` | Escreve texto formatado | `<stdio.h>` |
| `fscanf()` | Lê texto formatado | `<stdio.h>` |
| `fgets()` | Lê uma linha | `<stdio.h>` |
| `fputs()` | Escreve uma string | `<stdio.h>` |
| `fread()` | Lê dados binários | `<stdio.h>` |
| `fwrite()` | Escreve dados binários | `<stdio.h>` |
| `fseek()` | Move o ponteiro do arquivo | `<stdio.h>` |

## Modos de Abertura
| Modo | Descrição |
|------|-----------|
| `"r"` | Leitura (arquivo deve existir) |
| `"w"` | Escrita (cria ou trunca) |
| `"a"` | Adição (append, cria se não existir) |
| `"r+"` | Leitura e escrita (arquivo deve existir) |
| `"w+"` | Leitura e escrita (cria ou trunca) |
| `"a+"` | Leitura e adição (cria se não existir) |
| `"rb"`, `"wb"`, etc. | Modo binário |

## Abertura e Fechamento
```c
FILE *arquivo;

// Abertura
arquivo = fopen("dados.txt", "r");

// Verificação de erro
if (arquivo == NULL) {
    perror("Erro ao abrir arquivo");
    return 1;
}

// Operações no arquivo...

// Fechamento
fclose(arquivo);
```

## Operações em Arquivos de Texto

### Escrita
```c
FILE *arquivo = fopen("saida.txt", "w");
if (arquivo) {
    fprintf(arquivo, "Nome: %s, Idade: %d\n", "João", 25);
    fputs("Uma linha de texto\n", arquivo);
    fclose(arquivo);
}
```

### Leitura
```c
FILE *arquivo = fopen("entrada.txt", "r");
if (arquivo) {
    char nome[50];
    int idade;
    
    // Lendo dados formatados
    fscanf(arquivo, "Nome: %s, Idade: %d\n", nome, &idade);
    
    // Lendo linha completa
    char linha[100];
    fgets(linha, sizeof(linha), arquivo);
    
    fclose(arquivo);
}
```

## Operações em Arquivos Binários

### Escrita
```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

Pessoa p = {"Maria", 30};
FILE *arquivo = fopen("pessoas.bin", "wb");
if (arquivo) {
    fwrite(&p, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);
}
```

### Leitura
```c
Pessoa p;
FILE *arquivo = fopen("pessoas.bin", "rb");
if (arquivo) {
    fread(&p, sizeof(Pessoa), 1, arquivo);
    printf("Nome: %s, Idade: %d\n", p.nome, p.idade);
    fclose(arquivo);
}
```

## Exemplo Prático
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    float altura;
    
    // Escrevendo no arquivo
    arquivo = fopen("cadastro.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao criar arquivo");
        return 1;
    }
    
    printf("Entre com nome, idade e altura: ");
    scanf("%s %d %f", nome, &idade, &altura);
    
    fprintf(arquivo, "%s %d %.2f\n", nome, idade, altura);
    fclose(arquivo);
    
    // Lendo do arquivo
    arquivo = fopen("cadastro.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }
    
    // Limpa as variáveis para garantir
    nome[0] = '\0';
    idade = 0;
    altura = 0.0;
    
    fscanf(arquivo, "%s %d %f", nome, &idade, &altura);
    printf("\nDados lidos do arquivo:\n");
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
    
    fclose(arquivo);
    return 0;
}
```

## Pontos Importantes
1. Sempre verifique se a abertura do arquivo foi bem-sucedida
2. Feche arquivos após o uso para liberar recursos
3. Use o modo adequado para cada operação
4. O modo binário ("b") é importante para portabilidade entre sistemas
5. `fflush()` pode ser usado para forçar a gravação imediata dos dados