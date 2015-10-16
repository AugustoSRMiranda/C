#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float x;
    int n;
    float s;
    float t;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    s = 0;
    x = 1;
    
    while(x<=n)
    {
              t = x;
              printf("Termo: 1/%.0f\n",t);
              s += 1/t;
              x += 1;
    }
    
    printf("Soma = %.2f\n", s);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
