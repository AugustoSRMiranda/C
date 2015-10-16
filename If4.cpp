#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    int c;
    
    printf ("Digite 3 numeros: ");
    scanf ("%d %d %d", &a, &b, &c);
    
    if ((a>b) && (a>c))
    {
              printf ("O maior numero e: %d \n", a);
              }
              
              else if ((b>a) && (b>c))
              {
                   printf ("O maior numero e: %d \n", b);
                   }
                   
                   else
                   {
                       printf ("O maior numero e: %d \n", c);
                       }
                          
    system("PAUSE");
    return EXIT_SUCCESS;
}
