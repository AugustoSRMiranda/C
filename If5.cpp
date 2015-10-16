#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a;
    float b;
    float c;
    
    printf ("Digite as 3 notas: ");
    scanf ("%f %f %f", &a, &b, &c);
    
    if (((a+b+c)/3 >= 6) && ((a >= 5) && (b >= 5) && (c >= 5)))
    {
                   printf ("Aprovado \n");
                   }
                   
                   else
                   {
                       printf ("Reprovado \n");
                       } 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
