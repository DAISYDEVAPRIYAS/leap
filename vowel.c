#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
	{
		printf("%c is vowel",a);
	}
	else
	{
		printf("%c is consonant",a);
	}
	// your code goes here
	return 0;
}
