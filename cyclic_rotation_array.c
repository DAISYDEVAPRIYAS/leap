#include <stdio.h>

int main(void) {
	int a[10],n,i,t,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=a[0];
    a[0]=a[n-1];
	for(i=1;i<n;i++)
	{
		temp=a[i];
		a[i]=t;
		t=temp;
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}
