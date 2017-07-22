#include <stdio.h>

int main(void) {
	int b,e,s=1;
	scanf("%d",&b);
	scanf("%d",&e);
	while(e!=0)
	{
		s=s*b;
		e--;
	}
	printf("%d",s);
	return 0;
}
