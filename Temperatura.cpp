#include <stdio.h>
#include <stdlib.h>

float CelsiusParaFahr(float a)
{
    float b;
    b = ((float)9*a+160)/5;
    return b;
}

float FahrParaCelsius(float a)
{
    float b;
    b = (a-32)*5/9;
    return b;
}


int main() {
    int a;
    char t;

    printf("Digite a temperatura: ");
    scanf("%d",&a);
    printf("Digite o sistema de conversao: \n");
    printf("Digite [c] para celsius e [f] para fahrenheit \n");
    fflush(stdin);
    scanf("%c",&t);

    if (t=='f')
    {
       printf("A temperatura em Fahrenheit é: %.2f\n",CelsiusParaFahr(a));
    }
    else if (t=='c')
    {
       printf("A temperatura em celsius é: %.2f\n",FahrParaCelsius(a));
    }
    else {
       printf("Caracter invalido!\n\n");
    }

    system("pause");
    return 0;
}

