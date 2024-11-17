#include <stdio.h>
#include <math.h>

void menu();
int soma (int numero1, int numero2);
int subtracao(int numero1, int numero2);
float divisao(int numero1, int numero2);
int multiplicacao(int numero1, int numero2);
double potencia(int base, int numero);

int main()
{
    int operacao, numero1, numero2;
    menu ();
    scanf ("%d", &operacao);

    printf ("Digite os numeros a serem calculados (se for potencia base e altura): \n");
    scanf ("%d", &numero1);
    scanf ("%d", &numero2);
    

    switch (operacao)
    {
    case 1:
        soma(numero1, numero2);

        break;
    case 2:
        subtracao(numero1, numero2);

        break;
    case 3:
        divisao(numero1, numero2);
        break;
    case 4:
        multiplicacao(numero1, numero2);
        break;
    case 5:
        potencia (numero1, numero2);

    default:
    printf ("opcao inválida!");
        break;
    }
}

void menu()
{
    printf ("=========================================\n");
    printf ("============== CALCULADORA ==============\n");
    printf ("=========================================\n"); 
    printf ("\n");

    printf ("Qual operaçao voce ira usar? \n");
    printf ("=========================================\n"); 
    printf ("1. soma\n 2. subtracao\n 3. divisao\n 4. multiplicacao\n 5. potencia");
}

int soma(int numero1, int numero2)
{
    return numero1 + numero2;
}

int subtracao(int numero1, int numero2)
{
    return numero1 - numero2;
}

int multiplicacao (int numero1, int numero2)
{
    return numero1 * numero2;
}

float divisao(int numero1, int numero2)
{
    return (float)numero1 / (float)numero2;
}

double potencia(int base, int numero)
{
    double potenciacao;
    potenciacao = pow((double)base, (double)numero);
    return pow((double)base, (double)numero);
}

