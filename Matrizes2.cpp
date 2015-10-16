#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vetor1[5] = {1,2,3,4,5};
    int vetor2[5] = {5,4,3,2,1};
    int vetor3[5];
    int i;
    int soma;
    soma = 0;
    for (i = 0; i < 5; i++)
    {
        vetor3[i] = vetor1[i]*vetor2[i];
        soma = soma + (vetor1[i]*vetor2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf ("%d\n",vetor3[i]);
    }
    printf ("\n%d\n",soma);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
