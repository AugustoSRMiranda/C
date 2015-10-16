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
    Pt SD;
    Pt IE;
    Pt ID;
} Ret;

int verificacao (Ret R)
{
    if ((((R.SE.y == R.SD.y) && (R.IE.y == R.ID.y))
    && ((R.SD.x - R.SE.x) == ((R.ID.x - R.IE.x))))
    || (((R.SE.x == R.IE.x) && (R.SD.x == R.ID.x))
    && ((R.SE.y - R.ID.y) == ((R.SE.y - R.IE.y)))))
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
  Ret R;
  int resposta;

  printf("Digite os x y do cantos SE, SD, IE, ID:\n");
  scanf("%d %d %d %d %d %d %d %d",
        &R.SE.x,
        &R.SE.y,
        &R.SD.x,
        &R.SD.y,
        &R.IE.x,
        &R.IE.y,
        &R.ID.x,
        &R.ID.y);

  resposta = verificacao (R);

  if (resposta > 0)
  {
      printf("Eh um retangulo\n");
  }

  else
  {
      printf("Nao eh um retangulo\n");
  }

  system("PAUSE");
  return 0;
}
