#include <stdio.h>

int pow (int a, int b)
{
    if (b==1)
        return a;
    else
        return a*(pow(a,b-1));

}

int main ()
{
    int x;
    int y;

    printf("Digite a base e o expoente:\n");
    scanf("%d %d", &x, &y);
    printf("%d\n", pow(x, y));

    return 0;
}
