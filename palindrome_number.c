#include <stdio.h>

int main(void) {
	int n,r=0,d,x;
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(x==r)
	{
		printf("%d is palindrome",x);
	}
	else
	{
		printf("%d is not a palindrome",x);
	}
	
	// your code goes here
	return 0;
}
