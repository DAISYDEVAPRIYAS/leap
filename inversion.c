
#include <stdio.h>

int main(void) {
	int n,a[100],c=0,s,i,d[100],x=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		s=a[i];
		while(s>0)
		{
			
	   if(a[i]%s==0)
	   {
	   	c++;
	   }
	   s--;
		}
		d[i]=c;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(d[i]>d[j])
			{
				x++;
			}
			
		}
	}
	printf("%d",x);
		
		
	// your code goes here
	return 0;
}
