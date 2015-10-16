# include <stdio.h>
# include <stdlib.h>
#include <time.h>

typedef struct lista
{
    int a;
    struct lista *proximo;
}lista;

lista* novo_elemento (lista *p, int novo_elemento)
{
    if (p == NULL)
    {
        p = calloc(1,sizeof(lista));
        p->a = novo_elemento;
        return p;
    }

    lista *aux = p;

    if(novo_elemento < aux->a) {
        p = calloc(1,sizeof(lista));
        p->proximo = aux;
        p->a = novo_elemento;
        return p;
    }

    while ((aux->proximo != NULL) && (novo_elemento > aux->proximo->a))
    {
        aux = aux->proximo;
    }

     if(aux->proximo == NULL) {
        aux->proximo = calloc(1,sizeof(lista));
        aux->proximo->a = novo_elemento;
     } else {
         lista *prox = calloc(1,sizeof(lista));
         prox->a = novo_elemento;
         prox->proximo = aux->proximo;
         aux->proximo = prox;
     }

     return p;
}

void imprimir (lista *p)
{
    if (p == NULL)
    {
        return;
    }

    lista *aux = p;

    while (aux != NULL)
    {
        printf("%d ", aux->a);
        aux = aux->proximo;
    }
}

int main ()
{
    srand(time(NULL));
    int i;
    int x;
    lista *p = NULL;

   scanf("%d", &x);

   for (i = 0; i < x; i++)
    {
        p = novo_elemento(p,rand()%30);
    }

    imprimir(p);

system("pause");
return 0;
}
