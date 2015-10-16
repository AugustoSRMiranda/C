#include <cstdlib>
#include <iostream>

using namespace std;

int soma (int s) {
    if (s<=1)
    return 1;
    return s+soma(s-1);}
    

int main(int argc, char *argv[])
{
    int x;
    printf ("Digite um numero: ");
    scanf ("%d",&x);
    printf ("A soma dos numeros naturais e: %d \n",soma(x));
    system("PAUSE");
    return EXIT_SUCCESS;
}
