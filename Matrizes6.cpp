#include <stdio.h>
#include <stdlib.h>

using namespace std;

void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

/*
void ordem (int *a, int tamanho)
{
    int i;
    int j;

    for(i = 0; i < tamanho; i++)
    {
          for (j = 0; j < tamanho-1; j++)
          {
              if (*(a+j) > *(a+j+1))
              {
                       troca(a+j,a+j+1);
              }
          }
    }
}*/

void ordem (int *a, int tamanho)
{
    int i;
    int j;
    int *ptr;

    for(i = 0; i < tamanho; i++)
    {
          ptr = a;
          for (j = 0; j < tamanho-1; j++)
          {
              if (*ptr > *(ptr+1))
              {
                       troca(ptr,ptr+1);
              }
              ptr++;
          }
    }
}


int main(int argc, char *argv[])
{
    int i, x;
    int vet[5000];
    printf("Digite o numero de numeros que queira ver: ");
    scanf("%d", &x);

    printf("\n\n");

    for (i = 0; i < x; i++)
    {
        vet[i] = rand()%100;
    }

    for (i = 0; i < x; i++)
    {
        printf ("%d ", vet[i]);
    }

    ordem (vet, x);

    printf("\n\n");

    for (i = 0; i < x; i++)
    {
        printf ("%d ", vet[i]);
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
