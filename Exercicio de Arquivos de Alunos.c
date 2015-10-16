# include <stdio.h>
# include <stdlib.h>

typedef struct
{
    int numero;
    char nome[50];
    char curso[50];
    int nota;
}Aluno;

void menu ()
{
    printf("Digite a operacao que queira fazer:\n");
    printf("[1] Incluir novo aluno\n");
    printf("[2] Exibir listagem de alunos totais\n");
    printf("[3] Exibir listagem de alunos aprovados\n");
    printf("[4] Exibir listagem de alunos reprovados\n");
    printf("[0] SAIR\n\n");
}

int main()
{
    FILE *entrada, *aprovados, *reprovados;
    Aluno aluno, aux;
    int i, j, n;

    entrada = fopen("alunos.txt","r+b");

    if (entrada == NULL)
    {
        entrada = fopen("alunos.txt","wb");
        printf("Nao foi possivel ser o arquivo");
        exit(1);
    }

    menu();

    while(scanf("%d",&n), n)
   {

        switch(n)
        {
            case 1: printf("\n");
                    printf("Digite o o numero, nome, curso e nota do aluno(a):\n");
                    scanf("%d %s %s %d", &aluno.numero, aluno.nome, aluno.curso, &aluno.nota);
                    fseek(entrada, 0, SEEK_END);
                    if(fwrite(&aluno, sizeof(aluno), 1, entrada))
                        printf("O Aluno(a) foi cadastrado com sucesso\n\n");
                    break;
            case 2: printf("\n");
                    fseek(entrada, 0, SEEK_SET);
                    while(fread(&aluno, sizeof(aluno), 1, entrada))
                    {
                        printf("%d\n",aluno.numero);
                        printf("%s\n",aluno.nome);
                        printf("%s\n",aluno.curso);
                        printf("%d\n",aluno.nota);
                        printf("\n");
                    }
                    break;
            case 3: printf("\n");
                    aprovados = fopen("aprovados.txt", "wt");
                    fseek(entrada, 0, SEEK_SET);
                    while(fread(&aluno, sizeof(aluno), 1, entrada))
                    {
                        if (aluno.nota >= 7)
                        {
                            printf("%d\n",aluno.numero);
                            printf("%s\n",aluno.nome);
                            printf("%s\n",aluno.curso);
                            printf("%d\n",aluno.nota);
                            printf("\n");
                            fprintf(aprovados, "%d\n",aluno.numero);
                            fprintf(aprovados, "%s\n",aluno.nome);
                            fprintf(aprovados, "%s\n",aluno.curso);
                            fprintf(aprovados, "%d\n",aluno.nota);
                            fprintf(aprovados, "\n");
                        }
                    }
                    fclose(aprovados);
                    break;
            case 4: printf("\n");
                    reprovados = fopen("reprovados.txt", "wt");
                    fseek(entrada, 0, SEEK_SET);
                    while(fread(&aluno, sizeof(aluno), 1, entrada))
                    {
                        if (aluno.nota < 7)
                        {
                            printf("%d\n",aluno.numero);
                            printf("%s\n",aluno.nome);
                            printf("%s\n",aluno.curso);
                            printf("%d\n",aluno.nota);
                            printf("\n");
                            fprintf(reprovados, "%d\n",aluno.numero);
                            fprintf(reprovados, "%s\n",aluno.nome);
                            fprintf(reprovados, "%s\n",aluno.curso);
                            fprintf(reprovados, "%d\n",aluno.nota);
                            fprintf(reprovados, "\n");
                        }
                    }
                    fclose(reprovados);
                    break;

        }

        menu();

   }

    fclose(entrada);
    system("pause");
    return 0;
}
