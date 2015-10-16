#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    printf ("Digite 2 numeros: ");
    scanf("%d %d", &a, &b);
    
    if (a>b)
    {
            printf ("O maior numero e: %d \n", a);
            }
                        
    else
    {
        printf ("O maior numero e: %d \n", b);
        }
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
