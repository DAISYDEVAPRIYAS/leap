#include <stdio.h>

int main()
{
int c[10],i,p,len;
char s[100];
gets(s);
len=strlen(s);
for(i=0;i<10;i++)
c[i]=0;
for(i=0;i<len;i++)
{
p=s[i]-48;
c[p]++;
}
for(i=0;i<10;i++)
printf("%d %d\n",i,c[i]);
return 0;
}
