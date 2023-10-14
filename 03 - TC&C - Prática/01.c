#include <stdio.h>

int f(int n) {
    if (n % 2 == 1) {
        return n / 2 + 1;
    } else {
        return -n / 2;
    }
}

void printNonRecursive(int limite) {
    int n;
    for (n = 0; n <= limite; n++) {
        printf("[%d, %d], ", n, f(n));
    }
}

void printRecursive(int n, int limite) {
    if (n > limite) {
        return;
    }

    printf("[%d, %d], ", n, f(n));
    printRecursive(n + 1, limite);
}

int main() {
    int limite;
    printf("Informe o limite: ");
    scanf("%d", &limite);

    printf("Versão não recursiva: ");
    printNonRecursive(limite);

    printf("\n");

    printf("Versão recursiva: ");
    printf("[0, 0], ");  
    printRecursive(1, limite);

    printf("\n");

    return 0;
}