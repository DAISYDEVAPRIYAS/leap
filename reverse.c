#include <stdio.h>

int main(void) {
	char a[10],b[10];
	int i,j=0,l;
	gets(a);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	printf("%s",b);
	// your code goes here
	return 0;
}
