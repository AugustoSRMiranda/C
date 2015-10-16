#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int notas[999];
    int soma;
    int x;
    int i;
    char nomes[999][100];
    
    soma = 0;
    printf("Digite o numero de alunos da turma: ");
    scanf("%d",&x);
    for (i = 1; i <= x; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome do aluno: ");
        gets(nomes[i]);
        printf("Digite a nota do aluno: ");
        scanf("%d",&notas[i]);
        soma = soma + notas[i];
    }
    printf("\nA media da turma eh: %.1f", ((float)soma/x));
         
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
