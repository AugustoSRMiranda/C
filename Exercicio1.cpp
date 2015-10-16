#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int valor, qtd;
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d",&valor);
    
    qtd = valor/100;
    if (qtd > 0)
       printf("%d notas de 100\n",qtd);
    valor %= 100;
       
    qtd = valor/50;
    if (qtd > 0)
       printf("%d notas de 50\n",qtd);
    valor %= 50;
       
       qtd = valor/20;
    if (qtd > 0)
       printf("%d notas de 20\n",qtd);
    valor %= 20;
       
    qtd = valor/10;
    if (qtd > 0)
       {
       printf("%d notas de 10\n",qtd);
       }
    valor %= 10;
       
       qtd = valor/5;
    if (qtd > 0)
       {
       printf("%d notas de 5\n",qtd);
       }
    valor %= 5;
    
    qtd = valor/2;
    if (qtd > 0)
       {
       printf("%d notas de 2\n",qtd);
       }
    valor %= 2;
    
    if(valor>0) printf("faltou R$ 1,00!\n");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
