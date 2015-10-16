#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idade;
    float salario;
    int qtd_filho;
    int sexo; // 0 - F, 1 - M
}
Pesquisa;

int main(int argc, char *argv[])
{
    int i;
    int n_mulheres = 0;
    float media_idade = 0;
    float media_salario = 0;
    Pesquisa pessoa[3];

    for(i = 0; i < 3; i++)
    {
        scanf("%d %f %d %d,",
              &pessoa[i].idade,
              &pessoa[i].salario,
              &pessoa[i].qtd_filho,
              &pessoa[i].sexo);
              media_idade += pessoa[i].idade;
              media_salario += pessoa[i].salario;
              if ((pessoa[i].salario >= 500) && (pessoa[i].sexo == 0))
              {
                  n_mulheres++;
              }
    }
    
    printf("\n");

    printf("Valores lidos:\n");

    for(i = 0; i < 3; i++)
    {
    printf("Idade = %d | Salario = %.2f | N de filhos = %d | Sexo = %s \n\n",
              pessoa[i].idade,
              pessoa[i].salario,
              pessoa[i].qtd_filho,
              (pessoa[i].sexo == 1) ? "Maculino" : "Feminino");
    }
    
    printf("Media salarial: %.2f\n",media_salario/3);
    printf("Media etaria: %.2f\n",media_idade/3);
    printf("Mulheres com salario acima de 500: %d\n",n_mulheres);


  system("PAUSE");
  return 0;
}
