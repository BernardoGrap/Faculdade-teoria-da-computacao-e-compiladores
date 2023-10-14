/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float temperaturaCelsius, temperaturaFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", temperaturaCelsius, temperaturaFahrenheit);

    return 0;
}
