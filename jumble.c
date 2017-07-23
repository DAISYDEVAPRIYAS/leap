#include <stdio.h>

int main(void) {
	int a[1000],i,t1,t2,n,j=0;
	scanf("%d %d %d",&t1,&t2,&n);
	for(i=1;i<=1000;i++)
	{
		a[i]=2*i*i-i;
		
	}
	for(i=1;i<=1000;i++)
	{
	if((a[i]>=t1)&&(a[i]<=t2))
	{
		a[j]=a[i];
		j++;
	
	}
	}
	printf("%d ",a[n-1]);
	// your code goes here
	return 0;
}
