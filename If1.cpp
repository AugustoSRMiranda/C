#include <stdio.h>
#include <stdlib.h>

int main( ){
int num_magico, x;
num_magico = rand()%2;
printf("Digite um n�mero: ");
scanf("%d", &x);
if(x == num_magico)
printf("Parab�ns, voc� acertou o n�mero m�gico!!\n");
else
printf("Infelizmente voc� errou!!!\n");
system("pause");
return 0;
}
