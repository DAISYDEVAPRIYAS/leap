#include <stdio.h>

int main(void) {
	char a[10];
	int c=0,i;
	gets(a);
	for(i=0;i<10;i++)
	{
	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
	{
		c++;
	}
	}
	printf("%d",c);
	// your code goes here
	return 0;
}
