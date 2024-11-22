#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void fazercafe(float cafe, int xicara);
void iraomercado();
bool verificarrespostas(char resposta[4]);
int main()
{
    float cafe;
    int xicara, quantidade;
    char respostacafe[4], respostaagua[4];
    bool temcafe = false, temaguaquente = false;
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

        } else if (temcafe == false && temaguaquente == true)
        {
            printf ("Você não tem cafe, mas tem agua, pelo menos.\n");
            iraomercado();

        } else if (temcafe == true && temaguaquente == false)
        {
            printf ("Esquente água!\n");

        } else
        {
            printf ("Você não tem cafe nem agua! Compre cafe e esquente agua.\n");
            iraomercado();
        }
    }
}

bool verificarrespostas(char resposta[4])
{
    bool simounao;
   
    if (strcasecmp(resposta, "sim") == 0)
    {
        simounao = true;
    } else if (strcasecmp(resposta, "nao") == 0)
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
void iraomercado()
{
    int quantidade;
    printf ("Quantos cafés você vai comprar? ");
    scanf ("%d", &quantidade);

   printf ("voce comprou %d pacotes de cafe", quantidade);
}
