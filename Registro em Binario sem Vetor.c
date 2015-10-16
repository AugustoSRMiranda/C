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
    Registro registrado;
    int n, a, b;

    entrada = fopen("registrobinario.txt","r+b");

    if (entrada == NULL)
    {
        entrada = fopen("registrobinario.txt","wb");
        printf("Não foi possivel ler o arquivo");
        exit(1);
    }

    menu();

    while(scanf("%d",&n), n)
   {

        switch(n)
        {
            case 1: printf("\n");
                    printf("Digite o nome, email e telefone da pessoa da pessoa:\n");
                    scanf("%s %s %d", registrado.nome, registrado.email, &registrado.telef);
                    fseek(entrada, 0, SEEK_END);
                    if(fwrite(&registrado, sizeof(registrado), 1, entrada))
                    printf("A pessoa foi registrada com sucesso\n\n");
                    break;
            case 2: printf("\n");
                    fseek(entrada, 0, SEEK_SET);
                    while(fread(&registrado, sizeof(registrado), 1, entrada))
                    {
                        printf("%s\n",registrado.nome);
                        printf("%s\n",registrado.email);
                        printf("%d\n",registrado.telef);
                        printf("\n");
                    }
                    break;
            case 3: printf("\n");
                    printf ("Digite a posicao do registrado que queira alterar\n");
                    scanf("%d", &a);
                    printf("Digite o nome, email e telefone da pessoa da pessoa:\n");
                    scanf("%s %s %d", registrado.nome, registrado.email, &registrado.telef);
                    fseek(entrada, a*sizeof(registrado), SEEK_SET);
                    fwrite(&registrado, sizeof(registrado), 1, entrada);
                    printf("Os registros de %s foram editaados\n\n",registrado.nome);
                    break;
            case 4: printf("\n");
                    printf ("Digite a posicao do registrado que queira excluir\n");
                    scanf("%d",&b);
                    // pega nome do excluido
                    fseek(entrada, b*sizeof(registrado), SEEK_SET);
                    fread(&registrado, sizeof(registrado), 1, entrada);
                    printf("Os registros de %s foram apagados\n\n",registrado.nome);
                    //ler do final...
                    fseek(entrada, -sizeof(registrado), SEEK_END);
                    int tamanho = ftell(entrada);
                    fread(&registrado, sizeof(registrado), 1, entrada);
                    // ... e gravar na posicao b
                    fseek(entrada, b*sizeof(registrado), SEEK_SET);
                    fwrite(&registrado, sizeof(registrado), 1, entrada);
                    ftruncate(_fileno(entrada), tamanho);
                    break;
        }

        menu();

   }

    fclose(entrada);
    return 0;
}
