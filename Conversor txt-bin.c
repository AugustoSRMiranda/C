# include <stdio.h>
# include <stdlib.h>

int main ()
{
    FILE *entrada, *saida;
    int n;

//  Como converto o conteudo do arquivo usando anteriormente em binario?
// RESPOSTA: código abaixo.

    entrada = fopen("numeros.txt","rt");
    if(entrada == NULL)
    {
        printf("Erro ao abrir entrada_arq.txt!\n");
        exit(1);
    }
    saida = fopen("numeros.bin","wb");

    // enquanto não chegar no fim do arquivo, lê e grava cada valor
    while (!feof(entrada))
    {
       fscanf(entrada, "%d", &n);
//printf("%d ", n); // caso queira exibir o que está sendo lido e gravado
       fwrite(&n, sizeof(int), 1, saida);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
