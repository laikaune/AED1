/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
 
    int num = 1;
    int num2 = 2;
    printf ("Endereço de num: %d\n", &num);
    printf ("Endereço de num2: %d\n", &num2);

    int *ptr1;
    int *ptr2;

        ptr1 = &num;
        ptr2 = &num2;

    if (ptr1 > ptr2)
    {
        printf ("numero 1 tem um endereço maior");
    } else
    {
        printf ("numero 2 tem o endereço maior");
    }
}