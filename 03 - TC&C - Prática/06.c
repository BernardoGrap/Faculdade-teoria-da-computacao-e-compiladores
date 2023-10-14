#include <stdio.h>

#define NUM_CIDADES 3

int grafo[NUM_CIDADES][NUM_CIDADES] = {{0}};

void adicionarAresta(int origem, int destino, int distancia) {
    grafo[origem][destino] = distancia;
}

int calcularComprimentoCaminho(int origem, int destino) {
    if (grafo[origem][destino] == 0) {
        return -1; // Caminho inexistente
    }

    return grafo[origem][destino];
}

int possuiCiclo() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (grafo[i][j] > 0) {
                if (grafo[j][i] > 0) {
                    return 1; // Ciclo encontrado
                }
            }
        }
    }
    return 0; // Nenhum ciclo encontrado
}

void grauEntradaSaida() {
    int grauEntrada[NUM_CIDADES] = {0};
    int grauSaida[NUM_CIDADES] = {0};

    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            grauEntrada[j] += grafo[i][j];
            grauSaida[i] += grafo[i][j];
        }
    }

    printf("Grau de Entrada:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Cidade %d: %d\n", i, grauEntrada[i]);
    }

    printf("Grau de Saída:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Cidade %d: %d\n", i, grauSaida[i]);
    }
}

int main() {
    adicionarAresta(0, 1, 450);
    adicionarAresta(0, 2, 500);
    adicionarAresta(2, 1, 600);

    int origem, destino;
    printf("Informe a cidade de origem (0 a 2) e a cidade de destino (0 a 2): ");
    scanf("%d %d", &origem, &destino);

    int comprimento = calcularComprimentoCaminho(origem, destino);
    if (comprimento >= 0) {
        printf("Comprimento do caminho entre as cidades: %d km\n", comprimento);
    } else {
        printf("Caminho entre as cidades não existe.\n");
    }

    if (possuiCiclo()) {
        printf("O grafo possui ciclos.\n");
    } else {
        printf("O grafo não possui ciclos.\n");
    }

    grauEntradaSaida();

    return 0;
}