/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float cotacaoDolar, vlDolar, vlReal;

    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor em dólares: ");
    scanf("%f", &vlDolar);

    vlReal = vlDolar * cotacaoDolar;

    printf("%.2f dólares equivalem a %.2f reais\n", vlDolar, vlReal);

    return 0;
}
