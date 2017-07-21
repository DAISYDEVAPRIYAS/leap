#include <stdio.h>

int main(void) {
	char c;
	scanf("%c",&c);
	if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
	{
		printf("%c is an alphabet",c);
	}
	else
	{
		printf("%c is not an alphabet",c);
	}
	// your code goes here
	return 0;
}
