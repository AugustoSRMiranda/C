#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, n;
    
    printf ("Digite 1 numero: ");
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf ("*");
        printf ("\n");
    }
        
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
