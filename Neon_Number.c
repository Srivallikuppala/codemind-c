#include<stdio.h>
int main()
{
    int n,r,a,sum=0;
    scanf("%d",&n);
    r=n*n;
    while(r!=0)
    {
        a=r%10;
        r=r/10;
        sum=sum+a;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}