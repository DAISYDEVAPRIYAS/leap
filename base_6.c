#include <stdio.h>

int main(void) {
    int n,a[1000],b[1000],s,d,i,z=0,x[1000],c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        z=0;
        s=a[i];
        while(s!=0)
        {
            d=s%6;
            s=s/6;
            z=z+d;
           
        }
        x[i]=z;
        
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
   
    return 0;
}
