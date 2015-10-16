#include <stdio.h>

int maior(float a, float b)
{
    if(a>b)
        return 1;
    return 0;
}

int menor(float a, float b)
{
    if(a<b)
        return 1;
    return 0;
}

void ordena(float *vetor, int n, int (*func)(float,float))
{
    int i;
    int j;
    float aux;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if( func( vetor[j],vetor[j+1] )==0 )
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}


int main()
{
    int i;
    float a[10];

    for(i = 0; i < 10; i++)
    {
        scanf("%f",&a[i]);
    }

    ordena(a,10,menor);

    for(i = 0; i < 10; i++)
    {
        printf("%.1f ",a[i]);
    }

    printf("\n\n");

    ordena(a,10,maior);

    for(i = 0; i < 10; i++)
    {
        printf("%.1f ",a[i]);
    }
    system ("pause");
    return 0;
}
