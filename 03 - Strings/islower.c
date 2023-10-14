#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[] = "abc123";

    if (islower(palavra[0]) && isalpha(palavra[0]))
    {
        palavra[0] = toupper(palavra[0]);
    } 
    
    printf("String: %s", palavra);

    return 0;
}