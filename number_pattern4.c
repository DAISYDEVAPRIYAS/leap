#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==0)||(i==n-1)||(j==0)||(j==n-1))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
	// your code goes here
	return 0;
}
