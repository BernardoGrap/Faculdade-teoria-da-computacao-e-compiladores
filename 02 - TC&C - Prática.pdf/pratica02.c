#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função para ler uma sequência de números naturais do teclado e armazená-la em um arquivo
void Exercicio_a(char *nomeArquivo) {
    int n;
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    printf("Digite o número de elementos na sequência: ");
    scanf("%d", &n);

    printf("Digite os elementos da sequência:\n");
    for (int i = 0; i < n; i++) {
        int elemento;
        scanf("%d", &elemento);
        fprintf(arquivo, "%d\n", elemento);
    }

    fclose(arquivo);
}

// Função para ler uma sequência de números naturais de um arquivo e armazená-la em um vetor
void Exercicio_b(char *nomeArquivo, int *vetor, int *tamanho) {
    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    *tamanho = 0;
    while (fscanf(arquivo, "%d", &vetor[*tamanho]) != EOF) {
        (*tamanho)++;
    }

    fclose(arquivo);
}

// Função para imprimir um vetor de números naturais na tela
void Exercicio_c(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função para remover elementos duplicados de um vetor
int Exercicio_d(int *vetor, int tamanho) {
    int novoTamanho = 0;
    bool duplicado;

    for (int i = 0; i < tamanho; i++) {
        duplicado = false;

        for (int j = 0; j < novoTamanho; j++) {
            if (vetor[i] == vetor[j]) {
                duplicado = true;
                break;
            }
        }

        if (!duplicado) {
            vetor[novoTamanho] = vetor[i];
            novoTamanho++;
        }
    }

    return novoTamanho;
}

// Função para calcular e imprimir o conjunto potência (das partes) de um vetor
void Exercicio_e(int *vetor, int tamanho) {
    int totalSubconjuntos = 1 << tamanho; // 2^tamanho
    printf("Conjunto Potência:\n");

    for (int i = 0; i < totalSubconjuntos; i++) {
        printf("{");
        for (int j = 0; j < tamanho; j++) {
            if (i & (1 << j)) {
                printf(" %d", vetor[j]);
            }
        }
        printf(" }\n");
    }
}

// Função para calcular e imprimir os conjuntos próprios do conjunto potência de um vetor
void Exercicio_f(int *vetor, int tamanho) {
    int totalSubconjuntos = 1 << tamanho; // 2^tamanho
    printf("Conjuntos Próprios:\n");

    for (int i = 1; i < totalSubconjuntos - 1; i++) {
        printf("{");
        for (int j = 0; j < tamanho; j++) {
            if (i & (1 << j)) {
                printf(" %d", vetor[j]);
            }
        }
        printf(" }\n");
    }
}

// Função para realizar a união de dois vetores
void Exercicio_g(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *resultado, int *tamanhoResultado) {
    *tamanhoResultado = 0;

    for (int i = 0; i < tamanhoA; i++) {
        resultado[*tamanhoResultado] = vetorA[i];
        (*tamanhoResultado)++;
    }

    for (int i = 0; i < tamanhoB; i++) {
        bool elementoJaExiste = false;

        for (int j = 0; j < *tamanhoResultado; j++) {
            if (vetorB[i] == resultado[j]) {
                elementoJaExiste = true;
                break;
            }
        }

        if (!elementoJaExiste) {
            resultado[*tamanhoResultado] = vetorB[i];
            (*tamanhoResultado)++;
        }
    }
}

// Função para realizar a interseção de dois vetores
void Exercicio_h(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *resultado, int *tamanhoResultado) {
    *tamanhoResultado = 0;

    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (vetorA[i] == vetorB[j]) {
                resultado[*tamanhoResultado] = vetorA[i];
                (*tamanhoResultado)++;
                break;
            }
        }
    }
}

// Função para realizar a diferença entre dois vetores (A - B)
void Exercicio_i(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *resultado, int *tamanhoResultado) {
    *tamanhoResultado = 0;

    for (int i = 0; i < tamanhoA; i++) {
        bool elementoNaoPertenceA = true;

        for (int j = 0; j < tamanhoB; j++) {
            if (vetorA[i] == vetorB[j]) {
                elementoNaoPertenceA = false;
                break;
            }
        }

        if (elementoNaoPertenceA) {
            resultado[*tamanhoResultado] = vetorA[i];
            (*tamanhoResultado)++;
        }
    }
}

// Função para realizar a diferença entre dois vetores (B - A)
void Exercicio_j(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int *resultado, int *tamanhoResultado) {
    *tamanhoResultado = 0;

    for (int i = 0; i < tamanhoB; i++) {
        bool elementoNaoPertenceB = true;

        for (int j = 0; j < tamanhoA; j++) {
            if (vetorB[i] == vetorA[j]) {
                elementoNaoPertenceB = false;
                break;
            }
        }

        if (elementoNaoPertenceB) {
            resultado[*tamanhoResultado] = vetorB[i];
            (*tamanhoResultado)++;
        }
    }
}

// Função para realizar o produto cartesiano entre dois vetores
void Exercicio_k(int *vetorA, int tamanhoA, int *vetorB, int tamanhoB, int produtoCartesiano[][2], int *tamanhoProdutoCartesiano) {
    *tamanhoProdutoCartesiano = 0;

    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            produtoCartesiano[*tamanhoProdutoCartesiano][0] = vetorA[i];
            produtoCartesiano[*tamanhoProdutoCartesiano][1] = vetorB[j];
            (*tamanhoProdutoCartesiano)++;
        }
    }
}

int main() {
    // Passos a, b e c
    Exercicio_a("sequencia_A.txt");
    Exercicio_a("sequencia_B.txt");

    int vetorA[100], vetorB[100], tamanhoA, tamanhoB;
    
    Exercicio_b("sequencia_A.txt", vetorA, &tamanhoA);
    Exercicio_b("sequencia_B.txt", vetorB, &tamanhoB);

    Exercicio_c(vetorA, tamanhoA);
    Exercicio_c(vetorB, tamanhoB);

    // Passo d
    tamanhoA = Exercicio_d(vetorA, tamanhoA);
    tamanhoB = Exercicio_d(vetorB, tamanhoB);

    Exercicio_c(vetorA, tamanhoA);
    Exercicio_c(vetorB, tamanhoB);

    // Passos e e f
    int conjuntoPotenciaA[10000], conjuntoPotenciaB[10000], tamanhoConjuntoPotenciaA, tamanhoConjuntoPotenciaB;

    Exercicio_e(vetorA, tamanhoA);
    Exercicio_e(vetorB, tamanhoB);

    Exercicio_f(vetorA, tamanhoA);
    Exercicio_f(vetorB, tamanhoB);

    // Passo g
    int uniaoAB[200], tamanhoUniaoAB;
    
    Exercicio_g(vetorA, tamanhoA, vetorB, tamanhoB, uniaoAB, &tamanhoUniaoAB);
    Exercicio_c(uniaoAB, tamanhoUniaoAB);

    // Passo h
    int intersecaoAB[100], tamanhoIntersecaoAB;
    
    Exercicio_h(vetorA, tamanhoA, vetorB, tamanhoB, intersecaoAB, &tamanhoIntersecaoAB);
    Exercicio_c(intersecaoAB, tamanhoIntersecaoAB);

    // Passos i e j
    int diferencaAB[100], tamanhoDiferencaAB;
    int diferencaBA[100], tamanhoDiferencaBA;
    
    Exercicio_i(vetorA, tamanhoA, vetorB, tamanhoB, diferencaAB, &tamanhoDiferencaAB);
    Exercicio_j(vetorB, tamanhoB, vetorA, tamanhoA, diferencaBA, &tamanhoDiferencaBA);

    Exercicio_c(diferencaAB, tamanhoDiferencaAB);
    Exercicio_c(diferencaBA, tamanhoDiferencaBA);

    // Passos k e l
    int produtoCartesianoAB[10000][2], produtoCartesianoBA[10000][2];
    int tamanhoProdutoCartesianoAB = 0, tamanhoProdutoCartesianoBA = 0;

    Exercicio_k(vetorA, tamanhoA, vetorB, tamanhoB, produtoCartesianoAB, &tamanhoProdutoCartesianoAB);
    Exercicio_k(vetorB, tamanhoB, vetorA, tamanhoA, produtoCartesianoBA, &tamanhoProdutoCartesianoBA);

    // Imprimir produto cartesiano AB
    printf("Produto Cartesiano A x B:\n");
    for (int i = 0; i < tamanhoProdutoCartesianoAB; i++) {
        printf("{ %d, %d }\n", produtoCartesianoAB[i][0], produtoCartesianoAB[i][1]);
    }

    // Imprimir produto cartesiano BA
    printf("Produto Cartesiano B x A:\n");
    for (int i = 0; i < tamanhoProdutoCartesianoBA; i++) {
        printf("{ %d, %d }\n", produtoCartesianoBA[i][0], produtoCartesianoBA[i][1]);
    }

    return 0;
}