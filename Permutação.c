#include <stdio.h>
#include <stdlib.h>

void permuta(char *str, int x, int n, int *usei){
	int i;
	if(x==n){
		for(i=0; i<n; i++){
			printf("%c",str[i]);
		}
		printf("\n");
	}

	for(i=0; i<n; i++){
		if(usei[i]==0){
			str[x] = i+'A';
			usei[i]=1;
			permuta(str,x+1,n,usei);
			usei[i]=0;
		}
	}

}

int main()
{
    printf("Digite o numero de combinacoes que queira ver: ");
    int n;
    scanf("%d",&n);
	char s[100];
	int usei[100],i;
	for(i=0;i<100; i++)
		usei[i]=0;
	permuta(s,0,n,usei);

	system("pause");
	return 0;
}
