#include <stdio.h>

int main(void) {
	int a,b,c,*p1,*p2;
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	c=*p1+*p2;
	printf("%d",c);
	
	// your code goes here
	return 0;
}
