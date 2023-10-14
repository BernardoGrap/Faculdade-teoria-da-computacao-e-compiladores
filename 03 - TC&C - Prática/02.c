#include <stdio.h>

int soma(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return soma(m + 1, n - 1);
    }
}

int main() {
    int num1, num2;
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    int resultado = soma(num1, num2);

    printf("O resultado da soma é: %d\n", resultado);

    return 0;
}