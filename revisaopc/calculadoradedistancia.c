/*Leia uma distancia em milhas e apresente-a convertida em quil ˆ ometros. A f ˆ ormula de ´
conversao˜ e: ´ K = 1, 61 ∗ M, sendo K a distancia em quil ˆ ometros e ˆ M em milhas.*/

#include <stdio.h>
int main()
{
    float K = 0, M;

    printf ("Digite as milhas a serem convertidas:\n");
        scanf ("%f", &M);
    
        K = 1.61 * M;

    printf ("%.2f milhas convertidas em quilometros: %.2f", M, K);

}