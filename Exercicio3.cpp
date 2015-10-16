#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nomes [10][100];
    int i;
    int j;
    char aux[100];
    
    for (i = 0; i < 10; i++)
    {
        gets (nomes [i]);
    }
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 9; i++)
        {
            strcmp(nomes[i], nomes[i+1]);
            if ( strcmp(nomes[i],nomes[i+1]) > 0)
            {
                 strcpy(aux, nomes[i]);
                 strcpy(nomes[i], nomes[i+1]);
                 strcpy(nomes[i+1], aux);
            }
        }
        }
        for (i = 0; i < 10; i++)
        printf("%s\n",nomes[i]);
                 
        
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
