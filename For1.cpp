#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  int i, nega;
  int vet[10];

  nega = 0;
  for (i = 0 ; i < 10 ; i++)
  {
      vet[i] = rand()%21 - 10;
      if (vet[i] < 0)
      nega++;
    }

    for (i = 0 ; i < 10 ; i++)
  {
      printf("%d\n",vet[i]);
    }

    printf("\n\n");

  printf("A quantidade de numeros negativos e: %d \n", nega);


    system("PAUSE");
    return 0;
}
