#include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			if(i>=j)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}
