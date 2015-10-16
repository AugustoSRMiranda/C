#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

void ordena(int v[100], int tamanho)
{
     int i, j, aux;
     for(i = 0; i < tamanho; i++)
     {
           for(j = 0; j < tamanho-1; j++)
           {
                 if(v[j] > v[j+1])
                 {
                         aux = v[j];
                         v[j] = v[j+1];
                         v[j+1] = aux;
                 }
           }
     }
}
                         

int main(int argc, char *argv[])
{
    int i, vet[1000];
    srand(time(NULL));
    
    for(i = 0; i < 1000; i++)
    {
          vet[i] = rand() % 1000;
    }
    
    ordena(vet, 100);
    printf("Vetor ordenado: \n");
    for(i = 0; i < 100; i++)
    {
          printf("%d ", vet[i]);
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
