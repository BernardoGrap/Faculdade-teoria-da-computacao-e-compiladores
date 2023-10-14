/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float peso, novoPesoEngordar, novoPesoEmagrecer;

    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    novoPesoEngordar = peso * (1 + 0.15);

    novoPesoEmagrecer = peso * (1 - 0.20);

    printf("Se a pessoa engordar 15%%, o novo peso será: %.2f\n", novoPesoEngordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso será: %.2f\n", novoPesoEmagrecer);

    return 0;
}
