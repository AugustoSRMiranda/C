#include <stdio.h>
#include <stdlib.h>

int main( ){
int num_magico, x;
num_magico = rand()%2;
printf("Digite um número: ");
scanf("%d", &x);
if(x == num_magico)
printf("Parabéns, você acertou o número mágico!!\n");
else
printf("Infelizmente você errou!!!\n");
system("pause");
return 0;
}
