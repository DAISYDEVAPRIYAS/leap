#include <stdio.h>

int main(void) {
	int a,i,s=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s=s*i;
	}
	printf("%d",s);
	// your code goes here
	return 0;
}
