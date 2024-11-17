#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void fazercafe(float cafe, int xicara);
int iraomercado();
bool verificarrespostas(char resposta[4]);
int main()
{
    float cafe;
    int pacotecafe, xicara, quantidade;
    char respostacafe[4], respostaagua[4];
    bool temcafe, temaguaquente;
    while (temcafe == false || temaguaquente == false){
    printf ("\nTem café?\n");
     scanf ("%3s", respostacafe); // le apenas 3 letras

     temcafe = verificarrespostas(respostacafe);

    printf ("Tem água quente? \n");
        scanf ("%3s", respostaagua);
     temaguaquente = verificarrespostas(respostaagua);

    if (temcafe == true && temaguaquente == true)
    {
        printf ("Quantas ml de café você quer? ");
        scanf ("%f", &cafe);

        printf("Quantas xícaras de café você quer? \n");
        scanf ("%d", &xicara);

        fazercafe(cafe, xicara);

        printf ("Quantas xícaras você bebeu?");
            scanf ("%d", &quantidade);
            xicara -= quantidade;
        printf ("Agora restam %d xicaras de cafe!", xicara);

    } else if (temcafe == false)
    {
        pacotecafe = iraomercado();
        printf ("voce comprou %d pacotes de cafe", pacotecafe);
    } else
    {
        printf ("Esquente água!\n");
    }
    }
}

bool verificarrespostas(char resposta[4])
{
    bool simounao;
   
    if (strcmp(resposta, "sim") == 0)
    {
        simounao = true;
    } else if (strcmp(resposta, "não") == 0)
    {
        simounao = false;
    }
    return simounao;
}

void fazercafe(float cafe, int xicara)
{
    if (xicara > 1)
    {
        printf ("Você fez %d xícaras de cafe com %.2fml!\n", xicara, cafe);
    } else 
    {
            printf ("Você fez %d xícara de cafe com %.2fml!\n", xicara, cafe);
    }
}
int iraomercado()
{
    int quantidade;
    printf ("Quantos cafés você vai comprar? ");
    scanf ("%d", &quantidade);
    return quantidade;
}
