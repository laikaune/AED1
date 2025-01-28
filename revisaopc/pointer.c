/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int inteiro = 10;
    float real = 2.4;
    char caracter = 'a';

        printf ("Endereço de inteiro = %x\n", &inteiro);
        printf ("Endereço do real = %x\n", &real);
        printf ("Endereço do caracter = %x\n\n", &caracter);

        printf ("Valor antes da troca : %d\n", inteiro);
        printf ("Valor antes da troca : %.1f\n", real);
        printf ("Valor antes da troca : %c\n\n", caracter);

    int *ptrInt;
    float *ptrReal;
    char *ptrChar;

        printf ("Endereço antes da troca : 0x%x\n", ptrInt);
        printf ("Endereço antes da troca : 0x%x\n", ptrReal);
        printf ("Endereço antes da troca : 0x%x\n\n", ptrChar);


    ptrInt = &inteiro;
    ptrReal = &real;
    ptrChar = &caracter;

        printf ("Endereço antes da troca : 0x%x\n", ptrInt);
        printf ("Endereço antes da troca : 0x%x\n", ptrReal);
        printf ("Endereço antes da troca : 0x%x\n\n", ptrChar);

    *ptrInt = 12;
    *ptrReal = 2.6;
    *ptrChar = 'c';

        printf ("Valor depois da troca : %d\n", *ptrInt);
        printf ("Valor depois da troca : %f\n", *ptrReal);
        printf ("Valor depois da troca : %c\n", *ptrChar);


}