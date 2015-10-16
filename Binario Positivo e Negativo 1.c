# include <stdio.h>
# include <stdlib.h>

int main ()
{
    FILE *entrada;
    int n, i, *numero, positivos, negativos;

    entrada = fopen("entrada_arq.bin","rb");
    if(entrada == NULL)
    {
        printf("Erro ao abrir entrada_arq.bin!\n");
        exit(1);
    }
    fread(&n, sizeof(int), 1, entrada);
    while (n != 0)
    {
       printf("%d: ", n);
       positivos = negativos = 0;
       if(n<2 || n>10000)
       {
           printf("quantidade invalida de casos\n\n");
       }
       else
       {
        printf("n: %d\n", n);
        numero = (int*) calloc(sizeof(int),n);
        fread(numero, sizeof(int), n, entrada);
         // le todos os n numeros de uma so vez
         // depois de lidos os valores,
         // verifica quantos são positivos e negativos
         for(i=0; i<n; i++)
         {
            printf("%d ", numero[i]);
            if(numero[i]<0)
                negativos++;
            else
                positivos++;
         }
         printf("\n");
         printf("%d negativos, %d positivos\n\n", negativos, positivos);
         free(numero);
       }
       fread(&n, sizeof(int), 1, entrada);
    }

    fclose(entrada);
    return 0;
}

