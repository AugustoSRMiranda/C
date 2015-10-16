#include <stdio.h>
#include <string.h>

int main()
{
    int j,i;
    char frase[50];
    char aux;
    char original[50];
    char compresso[50];

    gets(frase);

    for(i = 0, j= 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' ')
        {
            compresso[j] = frase[i];
            j++;
        }
    }
    compresso[j]='\0';

    strcpy(original,compresso);

    for (i = 0; i < strlen(compresso)/2; i++)
    {
        aux = compresso[i];
        compresso[i] = compresso[strlen(compresso)-i-1];
        compresso[strlen(compresso)-i-1] = aux;
    }

    if (strcmp(original,compresso) == 0)
    {
        printf("Eh um palindromo");
    }
    else
    {
        printf("Nao eh um palindromo");
    }
    return 0;
}
