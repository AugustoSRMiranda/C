#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int tamanho;
    float soma = 0.0;
    float *notas;

    printf("Digite o tamanho da turma: ");
    scanf("%d",&tamanho);

    notas = (float*)malloc(tamanho*sizeof(float)); // notas = (float*)calloc(tamanho,sizeof(float));

    for(i = 0; i < tamanho; i++)
    {
    scanf("%f", &notas[i]); // ou scanf("%f", p+i);
    soma += notas[i]; // ou soma += *(p+i);
    }

    printf("Media = %.2f", soma/tamanho);

  system("PAUSE");
  return 0;
}
