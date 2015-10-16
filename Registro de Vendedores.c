# include <stdio.h>
# include <stdlib.h>

typedef struct
{
    int codigo;
    char nome[50];
    int quantade_vendas;
} Vendedor;

typedef struct
{
    char nome;
    int quantade_vendas;
} Produto;

void menu ()
{
    printf("Digite a operacao que queira fazer:\n");
    printf("[1] Incluir novo vendedor(a)\n");
    printf("[2] Incluir novas vendas do vendedor(a)\n");
    printf("[3] Exibir listagem de vendedores\n");
    printf("[4] Exibir listagem de produtos X\n");
    printf("[5] Exibir o nome do vendedor(a) com maiores vendas\n");
    printf("[6] Alterar registro do vendedor(a)\n");
    printf("[7] Alterar registro de produtos\n");
    printf("[8] Excluir vendedor(a)\n");
    printf("[0] SAIR\n\n");
}

int main()
{
    FILE *vendedores_arq, *produtos_arq;
    int n;
    Vendedor vendedor;
    Produto produto;

    vendedores_arq = fopen("vendedores.txt","r+b");
    produtos_arq = fopen("produtos.txt","r+b");

    menu();

    while(scanf("%d",&n), n)
   {

        switch(n)
        {
            case 1: printf("Digite o codigo, nome, e quantidade de vendas do vendedor\n");
                    scanf("%d %s %d", vendedor.codigo, vendedor.nome, vendedor.quantidade_vendas);
                    fseek(vendedores_arq, 0, SEEK_END);
                    if(fwrite(&vendedor, sizeof(Vendedor), 1, vendedores_arq))
                        printf("O vendedor(a) %s foi cadastrado com sucesso\n\n", vendedor.nome);
                    break;
            case 2: printf("Digite o codigo do vendedor(a), nome do produto, e quantidade de vendas\n");
                    scanf("%d %s %d", produto.codigo, produto.nome, produto.quantidade_vendas);
                    fseek(produtos_arq, 0, SEEK_END);
                    if(fwrite(&produto, sizeof(Produto), 1, produto_arq))
                        printf("O produto %s foi cadastrado com sucesso\n\n", produto.nome);
                    break;
            case 4: fseek(entrada, 0, SEEK_SET);
                    while(fread(&aluno, sizeof(aluno), 1, entrada))
            case 5: {
                    int i, maior_vendedor=0, quantidade_maior=0, quantidade_vendedor[100], encontrou=0;
                    for(i=0;i<100;i++)
                        quantidade_vendedor[i]=0;
                    fseek(produtos_arq, 0, SEEK_SET);
                    while(fread(&produto, sizeof(Produto), 1, produto_arq)) {
                        quantidade_vendedor[produto.codigo] += produto.quantidade_vendas;
                    }
                    for(i=0;i<100;i++) {
                        if(quantidade_vendedor[i] > quantidade_maior) {
                            quantidade_maior = quantidade_vendedor[i];
                            maior_vendedor=i;
                        }
                    }

                    fseek(produtos_arq, 0, SEEK_SET);
                    while(!encontrou && fread(&vendedor, sizeof(Vendedor), 1, vendedor_arq)) {
                        if(vendedor.codigo == maior_vendedor) {
                            encontrou = 1;
                            printf("O vendedor %s é o campeao de vendas!\n\n", vendedor.nome);
                        }
                    }

                    }
                    break;
        }

    }

    fclose(produtos_arq);
    fclose(vendedores_arq);
    return 0;
}
