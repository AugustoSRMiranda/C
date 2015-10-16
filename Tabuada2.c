#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t;
    int i;
    printf ("Digite a tabuada que queira ver (Digite 0 para sair): ");
    while(scanf ("%d",&t) && t!=0)
    {
        printf ("\nA tabuada de %d: \n\n\n",t);
        for (i = 1; i <= 10; i++)
        {
            printf ("%d x %d = %d \n\n",t,i,t*i);
        }
        printf ("Digite a tabuada que queira ver (Digite 0 para sair): \n");
    }
  system("PAUSE");
  return 0;
}
