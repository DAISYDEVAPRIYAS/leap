#include <stdio.h>

int main (void){
	char a[10],b[10];
	int i;
scanf("%s",a);
scanf("%s",b);
	for(i=0;(a[i]!='\0')||(b[i]!='\0');i++)
	{
		if(a[i]!=b[i])
		{
			printf("Strings are not equal");
			break;
		}
		

	else
	{
		printf("Strings are  equal");
		break;
	}
	}
	// your code goes here
	return 0;
}
