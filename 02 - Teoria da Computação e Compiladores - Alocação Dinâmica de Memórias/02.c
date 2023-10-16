#include <stdio.h>
#include <stdlib.h>

// Estrutura Pessoa
struct Pessoa {
    char CPF[12];
    char nome[50];
    float salario;
};

struct Pessoa* criarVetorPessoas(int n) {
    struct Pessoa *vetor = (struct Pessoa *)calloc(n, sizeof(struct Pessoa));
    if (vetor == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return vetor;
}

void preencherVetorPessoas(struct Pessoa *vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe o CPF da pessoa %d: ", i + 1);
        scanf("%s", vetor[i].CPF);

        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", vetor[i].nome);

        printf("Informe o salário da pessoa %d: ", i + 1);
        scanf("%f", &vetor[i].salario);
    }
}

void imprimirVetorPessoas(const struct Pessoa *vetor, int n) {
    printf("Vetor de Pessoas:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("CPF: %s\n", vetor[i].CPF);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Salário: %.2f\n", vetor[i].salario);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor de Pessoas: ");
    scanf("%d", &n);

    struct Pessoa *vetorPessoas = criarVetorPessoas(n);

    preencherVetorPessoas(vetorPessoas, n);

    imprimirVetorPessoas(vetorPessoas, n);

    free(vetorPessoas);

    return 0;
}
