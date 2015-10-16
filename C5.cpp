#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    float f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%d",&c);
    f = (9*c+160)/5;
    printf("A temperatura em Fahrenheit é: %.2f\n",f);
    system("pause");
return 0;
}
    
