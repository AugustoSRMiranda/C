#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[100];
    char *ponteiro;
    printf("Digite uma frase: ");
    gets(frase);

    printf("A frase eh: \n\n");
    ponteiro = frase;
    while(*ponteiro)
    {
        printf("%c\n", *ponteiro++);
    }

    printf("\n\n");

    return 0;
}
