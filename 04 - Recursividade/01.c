#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = potencia(base, expoente);

    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}