#include <stdio.h>
#include <string.h>

int main(void) {
	char a[10],b[10];
	int j=0,i,l;
	scanf("%s",a);
	l=strlen(a);
	for(i=l-1;a[i]!='\0';i--)
	{
		b[j]=a[i];
		j++;
	}

	for(i=0;a[i]!='\0';i++)
	{
		j=i;
	if(a[i]==b[j])
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
	
	// your code goes here
	return 0;
}
}
