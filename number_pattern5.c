#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==(n-1)/2)&&(j==(n-1)/2))
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	
	// your code goes here
	return 0;
}
