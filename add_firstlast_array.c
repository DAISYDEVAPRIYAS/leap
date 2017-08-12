#include <stdio.h>

int main(void) {
	int i,a[100],n,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	if(i<n)
	{
		s=a[i]+a[n-i-1];
	}
	printf("%d",s);
	// your code goes here
	return 0;
}
