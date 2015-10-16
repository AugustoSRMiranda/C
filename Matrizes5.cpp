#include <stdio.h>
#include <stdlib.h>

using namespace std;




int main(int argc, char *argv[])
{
    int a [4][3];
    int b [3][4];
    int c [4][4];
    int i;
    int j;
    int k;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            {
                 a[i][j] = rand() % 101;
                 printf("A[%d][%d] = %d   ", i+1, j+1, a[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            {
                 b[i][j] = rand() % 101;
                 printf("B[%d][%d] = %d   ", i+1, j+1, b[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");

    for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                c[i][j] = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for(k=0; k<3; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }

        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("C[%d][%d] = %d   ", i+1, j+1, c[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
