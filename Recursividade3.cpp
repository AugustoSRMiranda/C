#include <cstdlib>
#include <iostream>

using namespace std;

int fibonacci (int n) {
    if (n<=2)
    return 1;
    return fibonacci(n-1) + fibonacci(n-2); }

int main(int argc, char *argv[])
{
    int x;
    printf ("Digite um numero: ");
    scanf ("%d",&x);
    printf ("O %d termo de fibonacci e: %d\n",x, fibonacci(x));
    system("PAUSE");
    return EXIT_SUCCESS;
}
