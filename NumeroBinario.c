#include <stdio.h>
#include <stdlib.h>

void binario (int b)
{
 if (b == 0){
   return;
 }
 binario(b/2);
 printf("%d",b%2);
}

int main(int argc, char *argv[])
{
 int x;
 printf ("Digite um numero: ");
 scanf("%d", &x);
 printf ("Sua forma em binario: ");
 binario(x);
 printf("\n");


  system("PAUSE");
  return 0;
}
