#include <stdio.h>

int main(void) {
	int n,a=2,b=3,i,x[100],c,y[100],j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		x[i]=c;
	}
	for(i=0;i<n;i=i+2)
	{
		y[j]=x[i];
		j++;
	}
	if(n%2!=0)
	{
	for(j=0;j<((n/2)+1);j++)
	{
		printf("%d ",y[j]);
	}
	}
	else
	{
		for(j=0;j<((n/2)+1);j++)
	{
		printf("%d ",y[j]);
	}
	}
	// your code goes here
	return 0;
}
