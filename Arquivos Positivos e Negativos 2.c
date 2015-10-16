# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main ()
{
    FILE *entrada, *saida;
    int n, i, numero[10000], positivos, negativos;
    srand(time(NULL));

    entrada = fopen("numeros_arq.txt","w+");
    saida = fopen("posinega_arq.txt","w+");
    positivos = negativos = 0;

    printf("Informe a quantidade de caso de uso:\n");
    scanf("%d",&n);
    printf("\n");

       if(n<2 || n>10000)
       {
           printf("quantidade invalida de casos\n");
       }

       else
        {
        for(i=0; i<n; i++)
        {
            numero[i] = rand()%21 - 10;
            printf("%d\n", numero[i]);
            fprintf(entrada, "%d ", numero[i]);
            if(numero[i]<0)
                negativos++;
            else
                positivos++;
        }
        printf("\n\n");
        printf("%d negativos, %d positivos\n", negativos, positivos);
        fprintf(saida, "%d negativos, %d positivos\n", negativos, positivos);
       }

    fclose(entrada);
    fclose(saida);
    return 0;
}
