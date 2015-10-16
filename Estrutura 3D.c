# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct
{
    int x;
    int y;
    int z;
} Ponto_3D;

void distancia (Ponto_3D vet[10])
{
    float maior;
    int i, j, soma[10], id_maior;

    maior = -1;
    for (i = 0; i < 10; i++)
    {
        soma[i] = 0.0;
        for (j = 0; j < 10; j++)
        {
            int dx = vet[i].x - vet[j].x;
            int dy = vet[i].y - vet[j].y;
            int dz = vet[i].z - vet[j].z;
            soma[i] += sqrt(dx*dx + dy*dy + dz*dz);
        }
        if(maior < soma[i])
        {
            maior = soma[i];
            id_maior = i;
        }
    }

    printf("O ponto mais distante eh: (%d, %d, %d)\n", vet[id_maior].x, vet[id_maior].y, vet[id_maior].z);
}

int main ()
{
    int i;
    Ponto_3D vetor[10];
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        vetor[i].x = rand()%10;
        vetor[i].y = rand()%10;
        vetor[i].z = rand()%10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i].x);
        printf("%d ", vetor[i].y);
        printf("%d ", vetor[i].z);
        printf("\n");
    }

    printf("\n");

    distancia(vetor);

system("pause");
return 0;
}
