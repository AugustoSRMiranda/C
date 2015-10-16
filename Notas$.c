#include <stdio.h>
#include <stdlib.h>

//using namespace std;

int main(int argc, char *argv[])
{
    int nota[] = {100, 50, 20, 10, 5, 2};
    int valor, qtd, i;
    int gaveta[] ={3, 3, 3, 3, 3, 3};

    printf("Digite o valor a ser sacado: ");
    scanf("%d",&valor);

    for(i = 0; i < 6; i++)
    {
       qtd = valor/ nota[i];
       if (qtd > gaveta[i])
          qtd = gaveta[i];
       printf("%d notas de %d\n",qtd,nota[i]);
       valor = valor - nota[i]*qtd;
    }

    system("PAUSE");
    return 0;
}
