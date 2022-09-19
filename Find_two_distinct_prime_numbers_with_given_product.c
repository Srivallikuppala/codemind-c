#include<stdio.h>
int prime(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    return true;
    else
    return false;
}
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,l,m,count=0;
    for(i=2;i<=x/2;i++)
    {
        if(prime(i))
        {
        for(j=2;j<=x/2;j++)
        {
            if(prime(j))
            {
               if(i*j==x&&i<=j)
               {
                   l=i;
                   m=j;
                 count=1;
                 break;
               }
            }
        }
        }
    }
    if(count==1)
    printf("%d %d",l,m);
    else
    printf("-1");
}