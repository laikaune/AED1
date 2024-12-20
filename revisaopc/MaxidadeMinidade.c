// ler um vetor de 10 idades, infomar a idade maxima e a idade minima
#include <stdio.h>
// ATENÇÃO: adicionar a posicao que esta a idade minima.
int main ()
{
    int idade[5], idadeMax, idadeMin;

    printf ("Digite 5 idades:\n");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &idade[i]);
        }   

    printf ("Idades informadas: \n");
        for (int i = 0; i < 5; i++)
        {
            printf ("Idade %d\n", idade[i]);
        }

    idadeMax = idade[1];
    idadeMin = idade[1];

    // verificando a idade maxima e minima:
    for (int i = 0; i < 5; i++)
    {
        if (idadeMax < idade[i]); 
        {
            idadeMax = idade[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (idadeMin > idade[i]) // se a idade for = 50 > 34?
        {
            idadeMin = idade[i];
        }
    }

    printf ("Idade máxima: %d\n", idadeMax);
    printf ("Idade minima: %d\n", idadeMin);
}