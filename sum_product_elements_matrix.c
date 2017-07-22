#include <stdio.h>
int main(void) {
int a[10][10],i,j,r,c,s=0,p=1;
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
for(j=0;j<c;j++)
{
s=s+a[i][j];
p=p*a[i][j];
}
}
printf("%d\n",s);
printf("%d",p);
// your code goes here
return 0;

}
