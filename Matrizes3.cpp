#include <cstdlib>
#include <iostream>

using namespace std;

int primo (int n)
{
    int i;
    for(i=2;i<n;i++)
      if(n%i == 0)
        return 0;
    return 1;
}

int main(int argc, char *argv[])
{
    int vetor [200];
    int i;
    for (i = 1; i <= 200; i++)
    {
        vetor[i] = rand() % 101;                      
        printf("%d - %d\n", vetor[i], primo(vetor[i]));
    }
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
