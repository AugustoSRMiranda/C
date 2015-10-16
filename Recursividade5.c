#include <stdio.h>



float fracao (int x, int n)
{
    if (x == n){
        printf("1/%d\n",n);
        return 1.0/(float)n;
    }
    printf("1/%d + ",x);
    return 1.0/(float)x + fracao(x+1,n);
}

int main(int argc, char *argv[])
{

    int n;


    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Soma = %.2f\n", fracao(1,n));

    system("PAUSE");
    return 0;
}
