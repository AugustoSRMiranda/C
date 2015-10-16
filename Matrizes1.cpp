#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vetor[8];
    int i;
    int soma;
    int posi;
    int maior;
    int menor;
    
    soma = 0;
    posi = 0;
    maior = 0;
    menor = 11;
    
    for (i = 0; i < 8; i++)
    {
    vetor[i] = rand()%11;
    }
    for (i = 0; i < 8; i++)
    {
        printf ("%d\n",vetor[i]);
        soma = soma + vetor [i];
        if (vetor[i] > 0)
        {
           posi++;
        }
        if (vetor[i] > maior)
        {
           maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
           menor = vetor[i];
        }
    }
    
    printf ("\nSoma = %d\n",soma);
    printf ("\nMedia = %d\n",soma/8);
    printf ("\nPositivos = %d\n",posi);
    printf ("\nMaior = %d\n",maior);
    printf ("\nMenor = %d\n",menor);
    system("PAUSE");
    return EXIT_SUCCESS;
}
