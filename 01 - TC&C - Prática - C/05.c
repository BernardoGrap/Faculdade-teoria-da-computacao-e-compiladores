/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float diagonalMaior, diagonalMenor, area;

    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2.0;

    printf("A área do losango é: %.2f\n", area);

    return 0;
}
