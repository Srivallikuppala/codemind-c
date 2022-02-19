#include<stdio.h>
int main()
{
    int a,i,x,n,r,sum=0;
    scanf("%d",&a);
    n=a*a;
    for(i=10;i<100000;i=i*10)
    {
        r=n%i;
        r=(r*10)/i;
        n=n-r;
        sum=sum+r;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else if(sum!=a)
    {
        printf("Not Neon Number");
    }
}