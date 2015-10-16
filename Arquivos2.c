# include <stdio.h>
# include <stdlib.h>

void ordena (int *v)
{
    int i, j, aux;
    aux = 0;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main()
{
    FILE *entrada, *saida;
    int vet[10], i;

    entrada = fopen("arquivo2.txt","r");



    for(i = 0; i < 10; i++)
    {
        fscanf(entrada, "%d", &vet[i]);
    }

    fclose(entrada);

    for(i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n\n");
    ordena(vet);
    saida = fopen("arquivo2.txt","w");

    for(i = 0; i < 10; i++)
    {
        fprintf(saida, "%d ", vet[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }


    fclose(saida);

system ("pause");
return 0;
}
