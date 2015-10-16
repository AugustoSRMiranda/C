#include <cstdlib>
#include <iostream>

using namespace std;

int mais( int a, int b) { return a + b; }
int menos( int a, int b) { return a - b; }
int vezes( int a, int b) { return a * b; }
int divisao( int a, int b) { return a / b; }
int modulo( int a, int b) { return a % b; }

int main(int argc, char *argv[])
{
    int x;
    int y;
    char op;
    int (*operacao) (int , int);
    
    if(argc != 4) 
    {
            printf("Invalido\n");
            printf("Use: %s <valor> <operacao> <valor>\n", argv[0]);
            system("PAUSE");
            return 1;
    } 
    
    x = atoi(argv[1]);
    op = argv[2][0];
    y = atoi(argv[3]);
    
    printf("\n");
    if (op == '+') {
       operacao = mais;
       printf("Operacao de soma:\n");
       printf("%d + %d: %d\n\n", x, y, operacao(x,y));
    } else if (op == '-') {
       operacao = menos;
       printf("Operacao de diferenca:\n");
       printf("%d - %d: %d\n\n", x, y, operacao(x,y));
    } else if ((op == 'x') || (op == 'x')) {
       operacao = vezes;
       printf("Operacao de multiplicacao:\n");
       printf("%d * %d: %d\n\n", x, y, operacao(x,y));
    } else if (op == '/') {
       operacao = divisao;
       printf("Operacao de divisao:\n");
       printf("%d / %d: %d\n\n", x, y, operacao(x,y));
   } else {
       operacao = modulo;
       printf("Operacao de resto:\n");
       printf("%d %% %d: %d\n\n", x, y, operacao(x,y));
   }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
