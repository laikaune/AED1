#include <stdio.h>
#include <math.h>

void menu();
int soma (int numero1, int numero2);
int subtracao(int numero1, int numero2);
double divisao(int numero1, int numero2);
int multiplicacao(int numero1, int numero2);
double potencia(int base, int expoente);

int main()
{
    int operacao, numero1, numero2, resultado;
    double resultadodouble;

    menu ();
    scanf ("%d", &operacao);

    printf ("Digite os numeros a serem calculados (se for potencia base e expoente): \n");
    scanf ("%d", &numero1);
    scanf ("%d", &numero2);
    

    switch (operacao)
    {
    case 1:
       resultado = soma(numero1, numero2);
       printf ("%d", resultado);

        break;
    case 2:
        resultado = subtracao(numero1, numero2);
         printf ("%d", resultado);

        break;
    case 3:
        resultadodouble = divisao(numero1, numero2);
            printf ("%.2f", resultadodouble);
        break;
    case 4:
       resultado = multiplicacao(numero1, numero2);
        printf ("%d", resultado);
        break;
    case 5:
       resultadodouble = potencia(numero1, numero2);
        printf ("%.2f", resultadodouble);
        
        break;
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
    printf (" 1. soma\n 2. subtracao\n 3. divisao\n 4. multiplicacao\n 5. potencia\n");
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

double divisao(int numero1, int numero2)
{
    return (double)numero1 / (double)numero2;
}

double potencia(int base, int expoente)
{
    return pow(base, expoente);
}