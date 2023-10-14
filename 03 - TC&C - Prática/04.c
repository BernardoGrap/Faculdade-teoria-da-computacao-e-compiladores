#include <stdio.h>

int main() {
    int i;
    printf("Informe o valor de i: ");
    scanf("%d", &i);

    printf("Conjunto MQ%d: [0, 1] ", i);

    for (int n = 0; n <= i; n++) {
        printf("[%d, %d] ", n, i + 1);
    }

    printf("\n");

    return 0;
}