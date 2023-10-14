#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[] = "Abc123";

    if (isupper(palavra[0]) && isalpha(palavra[0]))
    {
        palavra[0] = tolower(palavra[0]);
    } 
    
    printf("String: %s", palavra);

    return 0;
}