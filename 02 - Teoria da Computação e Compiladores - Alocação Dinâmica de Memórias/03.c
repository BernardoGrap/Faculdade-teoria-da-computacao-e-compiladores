#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Veiculo {
    char chassi[20];
    char marca[50];
    char modelo[50];
    float preco;
};

struct Veiculo* alocarMemoria(int n) {
    struct Veiculo* veiculos = (struct Veiculo*)malloc(n * sizeof(struct Veiculo));
    if (veiculos == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return veiculos;
}

void preencherVeiculos(struct Veiculo* veiculos, int n) {
    for (int i = 0; i < n; i++) {
        printf("Veiculo %d:\n", i + 1);
        printf("Número do Chassi: ");
        scanf("%s", veiculos[i].chassi);
        printf("Marca: ");
        scanf("%s", veiculos[i].marca);
        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);
        printf("Preço: ");
        scanf("%f", &veiculos[i].preco);
    }
}

void imprimirVeiculos(struct Veiculo* veiculos, int n) {
    printf("\nLista de Veiculos:\n");
    for (int i = 0; i < n; i++) {
        printf("Veiculo %d:\n", i + 1);
        printf("Número do Chassi: %s\n", veiculos[i].chassi);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Preço: %.2f\n", veiculos[i].preco);
    }
}

int main() {
    int n;
    printf("Digite o tamanho inicial do vetor de Veiculos: ");
    scanf("%d", &n);

    struct Veiculo* veiculos = alocarMemoria(n);

    preencherVeiculos(veiculos, n);

    imprimirVeiculos(veiculos, n);

    int novo_tamanho = n + 5;
    veiculos = (struct Veiculo*)realloc(veiculos, novo_tamanho * sizeof(struct Veiculo));
    if (veiculos == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1;
    }

    preencherVeiculos(veiculos + n, 5);

    imprimirVeiculos(veiculos, novo_tamanho);

    free(veiculos);

    return 0;
}