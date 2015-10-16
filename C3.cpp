#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    float d;
    float e;
    printf("Digite 2 numeros: ");
    scanf("%d %d",&a,&b);
    c = a*4;
    d = b*0.6;
    e = (c+d)/2;
    printf("Os valores lidos foram: %d %d\n\n",a,b);
    printf("O calculo foi: %.d %.2f\n\n",c,d);
    printf("A media é: %.2f\n",e);
    
    system("pause");
return 0;
}
    
