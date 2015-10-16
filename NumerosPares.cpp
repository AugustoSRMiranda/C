#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int i;
    int j = 0;

    printf ("Digite quantos numeros pares queira ver: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
          for (i = 0; i < x; i++)
          {
              printf ("%d\n", j);
              j += 2;
          }
          
          printf("\n\n");
          
          //Ordem inversa
          
          j -= 2;  
          for (i = 0; i < x; i++)
          {
              printf ("%d\n", j);
              j -= 2;
          }
    }
    
    else
    {
          for (i = 0; i < x; i++)
          {
              printf ("%d\n", j);
              j += 2;
          }
          
           printf("\n\n");
          
          //Ordem inversa
          
          j -= 2; 
          for (i = 0; i < x; i++)
          {
              printf ("%d\n", j);
              j -= 2;
          }
    }
    
    
    
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
