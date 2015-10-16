# include <stdio.h>

int main ()
{
    char n[100];
    int i;
    char aux;

    gets (n);

    for (i = 0; i < strlen(n)/2; i++)
    {
        aux = n[i];
        n[i] = n[strlen(n)-i-1];
        n[strlen(n)-i-1] = aux;
    }

    printf("%s",n);
}
