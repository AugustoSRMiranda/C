#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    printf("Digite o primeiro e o ultimo termo: ");
    scanf("%d %d", &a, &b);
    while (a <= b)
    {
          printf("%d \n", a);
          a++;
          }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
