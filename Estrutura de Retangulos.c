#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Pt;

typedef struct
{
    Pt SE;
    Pt ID;
} Ret;

int cruzamento (Ret R1, Ret R2)
{
    if ((((R1.SE.x <= R2.SE.x) && (R1.ID.x >= R2.SE.x))
    && ((R1.SE.y >= R2.SE.y) && (R1.ID.y <= R2.SE.y)))
    || (((R2.SE.x <= R1.ID.x) && (R1.ID.x >= R2.ID.x))
    && ((R2.SE.y >= R1.ID.y) && (R1.ID.y <= R2.ID.y))))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main(int argc, char *argv[])
{
  Ret R1;
  Ret R2;
  int resposta;

  printf("Digite os x y do canto superior esquerdo e inferior direito do retangulo1:\n");
  scanf("%d %d %d %d",
        &R1.SE.x,
        &R1.SE.y,
        &R1.ID.x,
        &R1.ID.y);

  fflush (stdin);
  printf("\n\n");

  printf("Digite os x y do canto superior esquerdo e inferior direito do retangulo1:\n");
  scanf("%d %d %d %d",
        &R2.SE.x,
        &R2.SE.y,
        &R2.ID.x,
        &R2.ID.y);

  resposta = cruzamento (R1, R2);

  if (resposta > 0)
  {
      printf("Os retangulos se cruzam\n");
  }

  else
  {
      printf("Os retangulos nao se cruzam\n");
  }

  system("PAUSE");
  return 0;
}
