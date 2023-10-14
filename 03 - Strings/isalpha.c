#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[] = "a123";
    int temLetras = 0; 

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (isalpha(palavra[i])) {
            temLetras = 1; 
            break; 
        }
    }

    if (temLetras) {
        printf("A string possui letras.\n");
    } else {
        printf("A string não possui letras (contém números ou caracteres especiais).\n");
    }

    return 0;
}