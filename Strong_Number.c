#include<stdio.h>
int main()
{
    int n,sum=0,f=1,i,r,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        q=q/10;
        sum=sum+f;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
     {
        printf("The number %d is not a strong number",n);
    }
}