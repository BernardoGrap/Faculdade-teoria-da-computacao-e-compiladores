#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[] = "Hello World!";
    int temNumeros = 0; 

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (isdigit(palavra[i])) {
            temNumeros = 1 
            break; 
        }
    }

    if (temNumeros) {
        printf("A palavra possui números.\n");
    } else {
        printf("A palavra não possui números.\n");
    }

    return 0;
}