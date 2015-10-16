#include <cstdlib>
#include <iostream>

using namespace std;



char *estacao(int dia,int mes)
{
    if((mes<3)|| (mes==3&&dia<21))
        return "verao";
    if((mes<6)|| (mes==6&&dia<21))
        return "outono";
    if((mes<9) || (mes==9&&dia<23))
        return "inverno";
    if ((mes<12) || (mes==12&&dia<21))
        return "primavera";
    else
        return "verao";
}

int main(int argc, char *argv[])
{
 int dia,mes;
 printf ("Digite o dia/mes:\n");
 scanf("%d/%d",&dia,&mes);
 printf("estacao : %s\n",estacao(dia,mes));

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
