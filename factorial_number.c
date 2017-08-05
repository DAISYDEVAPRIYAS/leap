#include <stdio.h>

int main(void) {
	int n,f=1;
	scanf("%d",&n);
	while(n>0)
	{
		f=f*n;
		n--;
	}
	printf("%d",f);
	return 0;
}
