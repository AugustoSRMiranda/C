# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main ()
{
    FILE *entrada, *saida;
    int n, i, numero[10000], positivos, negativos;
    srand(time(NULL));

    entrada = fopen("numeros_bin.bin","w+b");
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
            fwrite(&numero[i], sizeof(numero[i]), 1, entrada);
            if(numero[i]<0)
                negativos++;
            else
                positivos++;
        }
        printf("\n\n");
        printf("%d negativos, %d positivos\n", negativos, positivos);
       }

    fclose(entrada);
    return 0;
}
