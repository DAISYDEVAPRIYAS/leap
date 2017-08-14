#include<stdio.h>
int main(void)
{
int a,i,flag=1;  
scanf("%d",&a); 
for(i=1; i<=a ; i++)
{
if(a%i==0)
{
flag=1; 
}
else
{
flag=0; 
}
}
if(flag==1)
{
printf("prime"); 
}
else
{
printf("not prime"); 
}
