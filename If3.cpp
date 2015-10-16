#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    
    printf ("Digite um numero: ");
    scanf ("%d", &a);
    
    if (a % 2 == 0)
    {
              printf ("O numero e par \n");
              }
              
              else
              {
                  printf ("O numero e impar \n");
                  }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
