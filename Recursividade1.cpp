#include <cstdlib>
#include <iostream>

using namespace std;

int fatorial(int n) {
    if(n<=1)
    return 1;
    return n * fatorial(n-1);}

int main(int argc, char *argv[])
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("O fatorial é: %d \n:", fatorial(n));
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
