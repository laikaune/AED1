#include <stdio.h>
#include <stdlib.h>
    struct Paralelepipedo 
    {
        float largura;
        float altura;
        float comprimento;
        float densidade;

    };
float calculaArea(struct Paralelepipedo variavel);
float calculaVolume(struct Paralelepipedo variavel);
float calculaMassa(struct Paralelepipedo variavel, float volume);
int main ()
{
    struct Paralelepipedo novoParalelepipedo;
    float area, volume, massa;

    printf ("################\n");
    printf ("Informe os valores\n");
    printf ("################\n");

    printf ("Digite a largura do paralelepipedo:\n");
    scanf ("%f", &novoParalelepipedo.largura);

    printf ("Digite a altura do paralelepipedo:\n");
    scanf ("%f", &novoParalelepipedo.altura);


    printf ("Digite o comprimento do paralelepipedo:\n");
    scanf ("%f", &novoParalelepipedo.comprimento);

    printf ("Digite a densidade do paralelepipedo:\n");
    scanf ("%f", &novoParalelepipedo.densidade);

    printf ("\n");

  
      area = calculaArea(novoParalelepipedo);
      printf ("area: %.2f\n", area);

      volume = calculaVolume(novoParalelepipedo);
      printf ("volume: %.2f\n", volume);

      massa = calculaMassa(novoParalelepipedo, volume);
      printf ("massa: %.2f", massa);
}

float calculaArea(struct Paralelepipedo variavel) {
    return 2*((variavel.comprimento * variavel.largura) + (variavel.comprimento * variavel.altura) + (variavel.largura * variavel.altura));
}

float calculaVolume(struct Paralelepipedo variavel)//  C * L * H
{
    float volume = 0;
    volume = variavel.comprimento * variavel.largura * variavel.altura;
    return volume;
}
float calculaMassa(struct Paralelepipedo variavel, float volume) // D * V
{
    float massa = 0;
    return massa = variavel.densidade * volume;
}