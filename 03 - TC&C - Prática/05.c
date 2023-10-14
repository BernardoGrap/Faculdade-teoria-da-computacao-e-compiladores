#include <stdio.h>
#include <stdlib.h>

#define NUM_CIDADES 4

int grafo[NUM_CIDADES][NUM_CIDADES] = {0};

void inserirDistancia(int cidadeA, int cidadeB, int distancia) {
    if (cidadeA >= 0 && cidadeA < NUM_CIDADES && cidadeB >= 0 && cidadeB < NUM_CIDADES) {
        grafo[cidadeA][cidadeB] = distancia;
        grafo[cidadeB][cidadeA] = distancia; // Grafo não direcionado
    } else {
        printf("Cidades inválidas.\n");
    }
}

int contarEstradas(int cidade) {
    int contador = 0;
    if (cidade >= 0 && cidade < NUM_CIDADES) {
        for (int i = 0; i < NUM_CIDADES; i++) {
            if (grafo[cidade][i] > 0) {
                contador++;
            }
        }
    } else {
        printf("Cidade inválida.\n");
    }
    return contador;
}

void imprimirMatriz() {
    printf("Matriz de Distâncias:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("%d\t", grafo[i][j]);
        }
        printf("\n");
    }
}

int encontrarDistancia(int cidadeA, int cidadeB) {
    if (cidadeA >= 0 && cidadeA < NUM_CIDADES && cidadeB >= 0 && cidadeB < NUM_CIDADES) {
        return grafo[cidadeA][cidadeB];
    } else {
        return 0;
    }
}

int main() {
    inserirDistancia(0, 1, 50);
    inserirDistancia(0, 2, 75);
    inserirDistancia(1, 2, 60);
    inserirDistancia(2, 3, 40);

    imprimirMatriz();

    printf("Quantidade de estradas ligando a cidade 2: %d\n", contarEstradas(2));

    int cidadeA, cidadeB;
    printf("Informe a identificação das duas cidades para calcular a distância entre elas (0 a 3): ");
    scanf("%d %d", &cidadeA, &cidadeB);
    int distancia = encontrarDistancia(cidadeA, cidadeB);
    if (distancia > 0) {
        printf("A distância entre as cidades é: %d\n", distancia);
    } else {
        printf("Não há uma estrada ligando as cidades.\n");
    }

    return 0;
}