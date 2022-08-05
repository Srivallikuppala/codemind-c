#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i;
    int a1=0,b=1,c;
    int d1,d2;
    for(i=0;i<100;i++)
    {
        a[i]=a1;
        c=a1+b;
        a1=b;
        b=c;
    }
    for(i=0;i<100;i++)
    {
        if(n<a[i])
        {
            d1=n-a[i-1];
            d2=a[i]-n;
            if(d1>d2)
            {
                printf("%d",a[i]);
                break;
            }
            else if(d1<d2)
            {
                printf("%d ",a[i-1]);
                break;
            }
            else if(d1=d2)
            {
                printf("%d %d",a[i-1],a[i]);
                break;
            }
        }
    }
}