# include <stdio.h>
# include <stdlib.h>

int main ()
{
    FILE *entrada, *saida;
    int n, i, *numero, positivos, negativos;

    entrada = fopen("entrada_arq.txt","rt");

    if(entrada == NULL)
    {
        printf("Erro!!!\n");
        exit(1);
    }
    saida = fopen("saida_arq.txt","w+");
    fscanf(entrada, "%d", &n);

    while (n != 0)
    {
      positivos = negativos = 0;
       if(n<2 || n>10000)
       {
           printf("quantidade invalida de casos\n\n");
           fprintf(saida, "quantidade invalida de casos\n\n");
       }
       else
       {
         numero = calloc(sizeof(int),n);
         printf("%d: ", n);
         for(i=0; i<n; i++)
         {
            fscanf(entrada, "%d", &numero[i]);
            printf("%d ", numero[i]);
            if(numero[i]<0)
                negativos++;
            else
                positivos++;

         }
         printf("\n");
         printf("%d negativos, %d positivos\n\n", negativos, positivos);
         fprintf(saida, "%d negativos, %d positivos\n\n", negativos, positivos);
         free(numero);
       }
       fscanf(entrada, "%d", &n);
    }


    fclose(entrada);
    fclose(saida);
    return 0;
}
