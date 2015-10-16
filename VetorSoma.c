#include <stdio.h>
#include <stdlib.h>

int soma (int *vet, int n)
{
    if(n == 0)
         return vet[0];
    return vet[n] + soma(vet,n-1);
}

int main(int argc, char *argv[])
{
    int i;
    int vet[10];

    for (i = 0; i < 10; i++)
    {
        vet[i] = rand()%11;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n",vet[i]);
    }

    printf("\n\n");

    printf("Soma = %d\n", soma(vet,10));

  system("PAUSE");
  return 0;
}
