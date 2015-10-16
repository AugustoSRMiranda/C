#include <stdio.h>
#include <stdlib.h>

int **cria_matriz (int m, int n)
{
    int i, j, **M;

    M = calloc(m,sizeof(int*));

    for (i = 0; i < m; i++)
    {
        M[i] = calloc(n,sizeof(int));
    }

    return M;
}

void matriz_identidade (int** M, int m, int n)
{
    int i,j;
     
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i == j)
            {
                 M[i][j] = 1;
            }
            else
            {
                M[i][j] = 0;
            }
        }
    }
}

void matriz_rand (int** M, int m, int n)
{
    int i,j;
     
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            M[i][j] = rand()%10;
        }
    }
}

void libera_matriz(int**M,int m, int n)
{
   int i;
   for (i = 0; i < m; i++)
     free(M[i]);
   free(M);
}

int main(int argc, char *argv[])
{
    int linhas, **matriz;
    int colunas;
    int i, j;

    printf("n de linhas: ");
    scanf("%d",&linhas);

    printf("n de colunas: ");
    scanf("%d",&colunas);

    printf("\n");

    matriz = cria_matriz (linhas, colunas);

    matriz_identidade (matriz, linhas, colunas);

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    libera_matriz (matriz, linhas, colunas);
    
    printf("\n");
    
    matriz = cria_matriz (linhas, colunas);
    
    matriz_rand (matriz, linhas, colunas);

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    libera_matriz (matriz, linhas, colunas);

  system("PAUSE");
  return 0;
}
