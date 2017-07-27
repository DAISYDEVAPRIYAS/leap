#include <stdio.h>

int main(void) {
	int s,r,a[200],i,t1,t2,c=0;
	scanf("%d %d",&s,&r);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	while(r>0)
	{
	c=0;
	scanf("%d %d",&t1,&t2);
	for(i=0;i<s;i++)
	{
	if((a[i]>t1)&&(a[i]<t2))
	{
		c++;
	}
	}
	printf("%d\n",c);
	r--;
	}
	return 0;
}
