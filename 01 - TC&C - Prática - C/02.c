/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int anoNasc, anoAtual, idade, idade2025;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%i", &anoNasc);

    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);

    idade = anoAtual - anoNasc;
    idade2025 = 2025 -anoNasc;
    
    printf("A sua idade é: %.2i\n", idade);
    printf("A sua idade em 2025 será: %.2i\n", idade2025);

    return 0;
}
