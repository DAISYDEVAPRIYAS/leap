#include <stdio.h>

int main(void) {
	int a[10][10],i,j,r,c;
	scanf("%d",&r);
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}
