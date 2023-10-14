#include <stdio.h>

void menorQue(int n, int i) {
    if (n <= i) {
        printf("[%d, %d] ", n, i + 1);
        menorQue(n + 1, i);
    }
}

int main() {
    int i;
    printf("Informe o valor de i: ");
    scanf("%d", &i);

    printf("Conjunto MQ%d: ", i);
    printf("[0, 1] ");
    menorQue(0, i);

    printf("\n");

    return 0;
}