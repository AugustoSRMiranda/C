#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int linhas;
    int colunas;
    int i, j;
    int **matriz;

    printf("n de linhas: ");
    scanf("%d",&linhas);

    printf("n de colunas: ");
    scanf("%d",&colunas);

    printf("\n");

    matriz = calloc(linhas,sizeof(int*));

    for (i = 0; i < linhas; i++)
    {
        matriz[i] = calloc(colunas,sizeof(int));
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand()%10;
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


  system("PAUSE");
  return 0;
}
