#include <stdio.h>
int main(void) {
int a[10][10],i,j,r,c;
scanf("%d",&r);
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");

}

// your code goes here
return 0;

}
