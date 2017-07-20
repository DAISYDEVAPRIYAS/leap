#include <stdio.h>

int main(void) {
	int n,a[10],i,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		
	}
	printf("%d",s);
	// your code goes here
	return 0;
}
