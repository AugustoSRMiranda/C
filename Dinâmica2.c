#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int tamanho;
    int *vetor;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&tamanho);
    printf("\n");

    vetor = calloc(tamanho,sizeof(int));

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%11;
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n",vetor[i]);
    }

  system("PAUSE");
  return 0;
}
