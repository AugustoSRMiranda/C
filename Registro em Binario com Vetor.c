# include <stdio.h>
# include <stdlib.h>

typedef struct
{
    char nome[50];
    char email[50];
    int telef;
}Registro;

void menu ()
{
    printf("Digite a operacao que queira fazer:\n");
    printf("[1] Incluir novo registro\n");
    printf("[2] Exibir listagem de registros\n");
    printf("[3] Alterar registro\n");
    printf("[4] Excluir registro\n");
    printf("[0] SAIR\n\n");
}

int main()
{
    FILE *entrada;
    Registro vet[100], aux;
    int i, j, tam, n, a, b;

    entrada = fopen("registro_b.txt","r+b");

    if (entrada == NULL)
    {
        entrada = fopen("registro_b.txt","wb");
        printf("Não foi possivel ler o arquivo");
        exit(1);
    }

    for(i = 0; fread(&vet[i],sizeof(Registro),1,entrada)!=0; i++);
    tam = i;

    menu();

    while(scanf("%d",&n), n)
   {

        switch(n)
        {
            case 1: printf("\n");
                    printf("Digite o nome, email e telefone da pessoa da pessoa\n");
                    scanf("%s %s %d",vet[tam].nome, vet[tam].email, &vet[tam].telef);
                    tam++;
                    printf("A pessoa foi registrada com sucesso\n\n");
                    break;
            case 2: printf("\n");
                    for(j = 0; j < tam; j++)
                    {
                        printf("%s\n",vet[j].nome);
                        printf("%s\n",vet[j].email);
                        printf("%d\n",vet[j].telef);
                        printf("\n");
                    }
                    break;
            case 3: printf("\n");
                    printf ("Digite a posicao do registrado que queira alterar\n");
                    scanf("%d", &a);
                    printf("Digite o nome, email e telefone da pessoa da pessoa\n");
                    scanf("%s %s %d",vet[a].nome, vet[a].email, &vet[a].telef);
                    printf("Os registros de %s foram editaados\n\n",vet[a].nome);
                    break;
            case 4: printf("\n");
                    printf ("Digite a posicao do registrado que queira excluir\n");
                    scanf("%d",&b);
                    for(j = b; j < tam-1; j++)
                    {
                        vet[j] = vet[j+1];
                    }
                    tam--;
                    printf("Os registros de %s foram apagados\n\n",vet[b].nome);
                    break;

        }

        menu();

   }

    fclose(entrada);

    entrada = fopen("registro_b.txt","wb");

    if (entrada == NULL)
    {
        printf("Não foi possivel ser o arquivo");
        exit(1);
    }

    for(j = 0; j < tam; j++)
    {
        fwrite(&vet[j], sizeof(vet[j]), 1, entrada);
    }

    fclose(entrada);
    system("pause");
    return 0;
}
