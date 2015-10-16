#include <stdio.h>
#include <stdlib.h>

/*
  A cada divisor que for encontrado, adiciono ele na variavel soma.
  Ao final comparo a soma com o numero dado e verifico se é igual para verificar se este é perfeito ou não
*/

int main(int argc, char *argv[])
{
    int x;
    int y;
    int z;
    int j;
    int i;
    int soma;
    scanf("%d",&x);
    for (i = 1; i <= x; i++) 
    {
        scanf ("%d",&y);
        soma = 0;
        for (j = 1; j < y; j++) 
        {
            z = y % j;
            if (z ==0) 
            {
               soma += j;
            } 
        }
        if (soma == y)
        {
                 printf ("%d eh perfeito\n",y);
        }
        else
        {
            printf ("%d nao eh perfeito\n",y);
        }   
    }
    system("PAUSE");	
    return 0;
}
