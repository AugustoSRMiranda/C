#include <stdio.h>

using namespace std;

int T (int n)
{
if (n == 1)
return 1;
return 2*T(n/2) + n;

}
int main(int argc, char *argv[])
{
    int x;
    printf("escreva um numero: ");
    scanf("%d", &x);

    printf("T(%d) = %d\n", x, T(x));

    return 0;
}
