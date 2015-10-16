#include <stdio.h>
#include <stdlib.h>

void soma(int a[4][3], int b[4][3], int c[4][3])
{
    int i,j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {

            {
                c[i][j] = a[i][j] + b[i][j];
            }

        }
    }
}

int main(int argc, char *argv[])
{
    int a [4][3];
    int b [4][3];
    int c [4][3];
    int i;
    int j;

    // cria matriz a
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            {
                 a[i][j] = rand() % 11;
                 printf("A[%d][%d] = %d   ", i+1, j+1, a[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");

    // cria matriz b
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            {
                 b[i][j] = rand() % 11;
                 printf("B[%d][%d] = %d   ", i+1, j+1, b[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");



    // soma a e b em c
    soma(a,b,c);

    // imprime matriz c
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("C[%d][%d] = %d   ", i+1, j+1, c[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
