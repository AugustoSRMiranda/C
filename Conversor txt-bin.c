# include <stdio.h>
# include <stdlib.h>

int main ()
{
    FILE *entrada, *saida;
    int n;

//  Como converto o conteudo do arquivo usando anteriormente em binario?
// RESPOSTA: c�digo abaixo.

    entrada = fopen("numeros.txt","rt");
    if(entrada == NULL)
    {
        printf("Erro ao abrir entrada_arq.txt!\n");
        exit(1);
    }
    saida = fopen("numeros.bin","wb");

    // enquanto n�o chegar no fim do arquivo, l� e grava cada valor
    while (!feof(entrada))
    {
       fscanf(entrada, "%d", &n);
//printf("%d ", n); // caso queira exibir o que est� sendo lido e gravado
       fwrite(&n, sizeof(int), 1, saida);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
