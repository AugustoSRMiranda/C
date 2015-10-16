# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void normalizar (int *v, int n)
{
    int i;
    v = calloc(n,sizeof(int));

    for(i = 0; i < n; i++)
    {
        v[i] = 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ",v[i]);
    }

}

int main ()
{
    srand(time(NULL));
    int x;
    int *vetor;

    x = rand()%10;
    printf("Tamanho do vetor = %d\n\n",x);
    normalizar (vetor, x);
    printf("\n");

system("pause");
return 0;
}
