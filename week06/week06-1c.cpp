#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int star=i,space=n-i;
		for(int j=0;j<space;j++) printf(" ");
		for(int j=0;j<star;j++) printf("*");
		printf("\n");
	}
}