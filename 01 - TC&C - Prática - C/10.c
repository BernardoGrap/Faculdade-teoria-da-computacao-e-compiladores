/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h> 

int main() {
    float vlRaio, vlComprimentoCircunferencia, vlAreaSuperficie, vlVolume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &vlRaio);

    vlComprimentoCircunferencia = 2 * M_PI * vlRaio;

    vlAreaSuperficie = M_PI * vlRaio * vlRaio;

    vlVolume = (3.0 / 4.0) * M_PI * pow(vlRaio, 3);

    printf("Comprimento da circunferência: %.2f\n", vlComprimentoCircunferencia);
    printf("Área da superfície da esfera: %.2f\n", vlAreaSuperficie);
    printf("Volume da esfera: %.2f\n", vlVolume);

    return 0;
}
