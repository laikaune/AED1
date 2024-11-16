/*Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, ´
assim como a diferenca existente entre ambos.*/

#include <stdio.h>
int main()
{
    int numero_1, numero_2, diferenca;

    printf("Digite o primeiro número: \n");
        scanf("%d", &numero_1);
    printf("Digite o segundo número: ");
        scanf("%d", &numero_2);

    if(numero_1 > numero_2)
    {
        printf("O número %d é maior!\n", numero_1);

         diferenca = numero_1 - numero_2;
        printf("Diferença entre eles: %d", diferenca);
    }
    else if(numero_2 > numero_1)
    {
        printf("O número %d é maior!\n", numero_2);

        diferenca = numero_2 - numero_1;
        printf("Diferença entre eles: %d", diferenca);
    } 
    else 
    {
        printf("São iguais.\n");
    }

    return 0;
}