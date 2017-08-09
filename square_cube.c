#include <stdio.h>
#include <math.h>

int main(void) {
	int a[i],t=0,s;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
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
