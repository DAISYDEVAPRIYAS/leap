#include <stdio.h>

int main(void) {
	int n,i,p;
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		p=i*n;
		printf("%d*%d=%d\n",i,n,p);
	}
	// your code goes here
	return 0;
}
