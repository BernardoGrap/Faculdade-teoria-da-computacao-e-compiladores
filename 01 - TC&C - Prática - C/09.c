/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h> 

int main() {
    float ladoA, ladoB, hipotenusa;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &ladoA);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &ladoB);

    hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);

    printf("A hipotenusa do triângulo é: %.2f\n", hipotenusa);

    return 0;
}
