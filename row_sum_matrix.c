#include <stdio.h>
int main(void) {
int a[10][10],i,j,r,c,s=0;
scanf("%d",&r);
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
	s=0;
for(j=0;j<c;j++)
{
s=s+a[i][j];
}
printf("%d\n",s);
}

// your code goes here
return 0;

}
