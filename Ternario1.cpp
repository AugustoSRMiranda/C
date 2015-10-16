#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a;
    float b;
    
    printf ("Digite 2 numeros: ");
    scanf ("%f %f", &a, &b);
    
    ((a>0) && (b>0)) ? printf ("Sua divisao é: %.1f \n", a/b) : printf ("Divisao invalida \n");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
