# Estruturas (Structs) em C

## Visão Geral
Estruturas (structs) permitem agrupar variáveis de tipos diferentes sob um único nome, criando tipos de dados personalizados.

## Declaração de Estruturas
```c
struct Nome_Estrutura {
    tipo1 membro1;
    tipo2 membro2;
    // ...
};
```

### Exemplo de Declaração
```c
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
```

## Criando Variáveis de Estrutura

### Método 1: Após a declaração
```c
struct Aluno estudante1;
```

### Método 2: Durante a declaração
```c
struct Aluno {
    char nome[50];
    int idade;
    float nota;
} estudante1, estudante2;
```

### Método 3: Com typedef
```c
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

Aluno estudante1;  // Sem necessidade de 'struct'
```

## Acesso aos Membros
```c
// Usando o operador ponto (.)
estudante1.idade = 20;
estudante1.nota = 9.5;
strcpy(estudante1.nome, "Maria");

// Exibindo dados
printf("Nome: %s, Idade: %d, Nota: %.1f\n", 
       estudante1.nome, estudante1.idade, estudante1.nota);
```

## Estruturas e Ponteiros
```c
Aluno *ptr_aluno = &estudante1;

// Acesso com operador seta (->)
ptr_aluno->idade = 21;

// Equivalente a:
(*ptr_aluno).idade = 21;
```

## Estruturas como Parâmetros de Função

### Por valor
```c
void exibe_aluno(Aluno a) {
    printf("Nome: %s, Nota: %.1f\n", a.nome, a.nota);
}
```

### Por referência
```c
void aumenta_nota(Aluno *a, float bonus) {
    a->nota += bonus;
}
```

## Arrays de Estruturas
```c
Aluno turma[30];  // Array com 30 alunos

// Preenchendo dados
strcpy(turma[0].nome, "João");
turma[0].idade = 19;
turma[0].nota = 8.5;
```

## Exemplo Prático
```c
#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int ano;
    float preco;
} Livro;

void exibe_livro(Livro l);

int main() {
    Livro biblioteca[3];
    
    // Cadastrando livros
    strcpy(biblioteca[0].titulo, "C: A Linguagem de Programação");
    strcpy(biblioteca[0].autor, "Ritchie & Kernighan");
    biblioteca[0].ano = 1988;
    biblioteca[0].preco = 89.90;
    
    strcpy(biblioteca[1].titulo, "Algoritmos");
    strcpy(biblioteca[1].autor, "Thomas Cormen");
    biblioteca[1].ano = 2009;
    biblioteca[1].preco = 125.50;
    
    // Exibindo livros
    printf("== Biblioteca ==\n");
    for (int i = 0; i < 2; i++) {
        exibe_livro(biblioteca[i]);
        printf("-----------------\n");
    }
    
    return 0;
}

void exibe_livro(Livro l) {
    printf("Título: %s\n", l.titulo);
    printf("Autor: %s\n", l.autor);
    printf("Ano: %d\n", l.ano);
    printf("Preço: R$%.2f\n", l.preco);
}
```

## Pontos Importantes
1. Estruturas são copiadas inteiramente quando passadas por valor
2. Use passagem por referência para evitar cópias desnecessárias de grandes estruturas
3. O operador `->` é uma abreviação para `(*ptr).membro`
4. Estruturas podem conter outras estruturas (aninhamento)
5. Estruturas permitem modelar entidades do mundo real no código