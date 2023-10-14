#include <stdio.h>

int somaNaturais(int maximo, int atual)
{
    if(maximo >= atual)
    {
        return atual + somaNaturais(maximo, atual + 1);
    }
    else
    {
        return 0;
    }
}

int main() {
    int base;

    printf("Digite um numero: ");
    scanf("%d", &base);

    int resultado = somaNaturais(base, 1);

    printf("Soma: %d", resultado);

    return 0;
}