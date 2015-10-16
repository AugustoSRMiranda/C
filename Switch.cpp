#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    float a;
    float b;
    char geo;
    
    printf ("Digite dois numeros e a forma geometrica: \n");
    printf ("[C] Circulo, o o primeiro numero sera o raio e o segundo e irrelevante \n");
    printf ("[Q] Quadrado, o primeiro numero sera a base e o segundo e a altura \n");
    printf ("[T] Triangulo, o primeiro numero sera a base e o segundo e a altura \n");
    scanf ("%f %f %c", &a, &b, &geo);
    
    switch(geo){
                case'c':
                case'C': printf ("A area do circulo e %.1f pi \n", a*a);
                break;
                case'q':
                case'Q': printf ("A area do quadrado e %.1f \n", a*b);
                break;
                case't':
                case'T': printf ("A area do triangulo e %.1f \n", (a*b)/2);
                break;
                default: printf("Operador %c desconhecido!\n", geo);                                   
}
    
    system("PAUSE");
    return 0;
}
