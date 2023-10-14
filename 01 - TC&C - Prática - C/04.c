/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float vlSalarioAtual, vlNovoSalario;

    printf("Digite o seu salario atual: ");
    scanf("%f", &vlSalarioAtual);

    vlNovoSalario = vlSalarioAtual + (vlSalarioAtual * 0.25);

    printf("Seu novo salario com aumento de 25%% será %.2f reais\n", vlNovoSalario);

    return 0;
}
