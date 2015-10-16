#include <stdio.h>
#include <stdlib.h>

int** base (int x)
{
    int i, **M;

    M = calloc(x,sizeof(int*));

    for (i = 0; i < x; i++)
    {
        M[i] = calloc(1,sizeof(int));
        M[i][0] = i;
    }

    return M;
}

int* tam (int x)
{
     int i, *T;

     T =(int *) calloc(x,sizeof(int));

     for (i = 0; i < x; i++)
     {
       T[i] = 1;
     }

     return T;
}

void menu ()
{
   printf("Digite qual comando voce quer:\n\n");
   printf("Digite [1] para mover o bloco da posicao a para b \n");
   printf("Digite [2] para mover o bloco a para cima do bloco b \n");
   printf("Digite [3] para mover o bloco a juntos com os blocos acima dele pra cima da posicao b\n");
   printf("Digite [4] para reiniciar a montagem do ponto inicial\n");
   printf("Digite [0] para Sair \n");
}

void comando_1 (int** M, int* tamanho, int x, int a, int b)
{
    int aux ;

    if (tamanho[a] >= 1)
        {
            tamanho[a]--;
            aux = M[a][tamanho[a]];

            if(tamanho[a]>0)
                {
                    M[a] = (int*)realloc(M[a],tamanho[a]*sizeof(int));
                }
            else
                {
                    M[a] = NULL;
                }

            tamanho[b]++;
            M[b] = (int*)realloc(M[b],tamanho[b]*sizeof(int));
            M[b][tamanho[b]-1] = aux;
        }
}

void comando_2 (int** M, int* tamanho, int x, int a, int b)
{
    int i,j,k,achei;
    achei=0;

    for (i = 0; i < x && !achei; i++)
    {
        for (j = 0; j < tamanho[i] && !achei; j++)
        {
            if(M[i][j] == a)
            {
                tamanho[i]--;

                for(k = j; k < tamanho[i]; k++)
                {
                    M[i][k] = M[i][k+1];
                }
                free(&M[i][tamanho[i]]);
                if(tamanho[i]==0){
                    M[i]=NULL;
                }
                achei =1;
            }
        }
    }

    achei=0;

     for (i = 0; i < x && !achei; i++)
    {
        for (j = 0; j < tamanho[i] && !achei; j++)
        {
            if(M[i][j] == b)
            {
                achei = 1;
                tamanho[i]++;
                M[i] = (int*)realloc(M[i],tamanho[i]*sizeof(int));

                for(k = tamanho[i]-1; k > j+1; k--)
                {
                    M[i][k] = M[i][k-1];

                }

                M[i][j+1] = a;

            }
        }
    }
}

void comando_3 (int** M, int* tamanho, int x, int a, int b)
{
    int i,j,k,achei,z;
    int* pilha, tampilha;
    achei=0;

    for (i = 0; i < x && !achei; i++)
    {
        for (j = 0; j < tamanho[i] && !achei; j++)
        {
            if(M[i][j] == a)
            {
                tampilha =  tamanho[i]-j;
                tamanho[i] -=  tamanho[i]-j;
                pilha =(int *) calloc(tamanho[i]-j,sizeof(int));


                for(z=0, k = j; k < tamanho[i]+tampilha; k++,z++)
                {
                    pilha[z] = M[i][k];
                }

                for(k = tamanho[i]+tampilha-1; k >=j ; k--)
                {
                    free(&M[i][k]);
                }

                if(tamanho[i]==0)
                {
                    M[i]=NULL;
                }
                achei =1;
            }
        }
    }

    achei=0;

     for (i = 0; i < x && !achei; i++)
    {
        for (j = 0; j < tamanho[i] && !achei; j++)
        {
            if(M[i][j] == b)
            {
                achei = 1;
                tamanho[i] += tampilha;
                M[i] = (int*)realloc(M[i],tamanho[i]*sizeof(int));

                for(k = j+1; k< tamanho[i]-tampilha; k++)
                {
                    M[i][k+tampilha] = M[i][k];
                }

               for(k = j+1; k < j+1+tampilha; k++)
                {
                    M[i][k] = pilha[k-j-1];
                }

            }
        }
    }
}

void comando_4 (int** M, int* tamanho, int x)
{
 int i;

 for (i = 0; i < x; i++)
 {
      free(M[i]);
 }
   free(M);
   free(tamanho);
}

void imprimir (int** M, int* tamanho, int x)
{
    int i,j, altura = -1;

    for(i = 0; i < x; i++)
    {
        if( tamanho[i] > altura)
        {
            altura = tamanho[i];
        }
    }

    for (i = altura; i >=0; i--)
    {
        for (j = 0; j < x; j++)
        {
            if (tamanho[j] <= i)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t", M[j][i]);
            }
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<x; i++)
    {
        printf("-\t");
    }
    printf("\n");

    for(i=0; i<x; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
   int **vet;
   int *t;
   int n,c,a,b;

   printf("Digite o numero de bases que queria ver: ");
   scanf("%d",&n);

   t = tam(n);

   vet = base(n);

   menu();

   printf("\n");

   imprimir(vet,t,n);

   printf("\n\n");

   while(scanf("%d",&c), c )
   {

    switch(c)
    {
        case 1: printf("Digite a posicao atual do bloco e aonde queria move-lo:\n");
                scanf("%d %d",&a,&b);
                printf("\n");
                comando_1(vet,t,n,a,b);
                imprimir(vet,t,n);
                printf("\n\n");
                break;
        case 2: printf("Digite o numero do bloco que queira mover e o numero do bloco que queria sobrepolo:\n");
                scanf("%d %d",&a,&b);
                printf("\n");
                comando_2(vet,t,n,a,b);
                imprimir(vet,t,n);
                printf("\n\n");
                break;
        case 3: printf("Digite o numero do bloco da base da pilha que queria mover e o numero do bloco que queria sobrepor a pilha:\n");
                scanf("%d %d",&a,&b);
                printf("\n");
                comando_3(vet,t,n,a,b);
                imprimir(vet,t,n);
                printf("\n\n");
                break;
        case 4: printf("\n");
                comando_4(vet,t,n);
                vet = base(n);
                t = tam(n);
                imprimir(vet,t,n);
                printf("\n\n");
                break;

    }
    menu();
   }

  system("PAUSE");
  return 0;
}
