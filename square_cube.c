#include <stdio.h>
#include <math.h>

int main(void) {
	int a[100],t=0,s,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s=pow(a[i],2);
		}
		else
		{
			s=pow(a[i],3);
		}
		t=t+s;
	}
	printf("%d",t);
	// your code goes here
	return 0;
}
