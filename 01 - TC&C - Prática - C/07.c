/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float vlSalarioMinimo, vlSalarioFuncionario, nrSalariosMinimos;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &vlSalarioMinimo);

    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &vlSalarioFuncionario);

    nrSalariosMinimos = vlSalarioFuncionario / vlSalarioMinimo;

    printf("O funcionário recebe %.2f salários mínimos\n", nrSalariosMinimos);

    return 0;
}
