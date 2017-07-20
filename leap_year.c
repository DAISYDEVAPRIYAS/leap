#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("Leap year");
	}
	else if(a%100==0)
	{
		printf("Not leap year");
	}
	else if(a%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not leap year");
	}
	// your code goes here
	return 0;
}
