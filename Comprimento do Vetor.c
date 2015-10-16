# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void normalizar (int *v, int n)
{
    int i;
    float *vetor_normalizado;
    float comprimento;

    comprimento = 0;

    vetor_normalizado = calloc(n,sizeof(int));

    for(i = 0; i < n; i++)
    {
        comprimento += v[i]*v[i];
    }

    comprimento = sqrt(comprimento);

    printf("Comprimento do vetor: %.2f", comprimento);

    printf("\n\n");

    for(i = 0; i < n; i++)
    {
        vetor_normalizado[i] = v[i]/comprimento;
    }

    printf("Vetor normalizado:\n\n");

    for(i = 0; i < n; i++)
    {
        printf("%.2f\n",vetor_normalizado[i]);
    }

    printf("\n");

}

int main ()
{
    srand(time(NULL));

    int i;
    int x;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&x);
    vetor = calloc(x,sizeof(int));

    printf("\n");

    for(i = 0; i < x; i++)
    {
        scanf("%d",&vetor[i]);
    }

    printf("\n");

    normalizar(vetor, x);

system("pause");
return 0;
}
