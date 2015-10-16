#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int aux;
    printf("Digite 2 numeros: ");
    scanf("%d %d",&a,&b);
    printf("A= %d\n\n",a);
    printf("B= %d\n\n",b);
    aux = a;
    a = b;
    b = aux;
    printf("A= %d\n\n",a);
    printf("B= %d\n\n",b);
    
    system("pause");
return 0;
}
    
