#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,count=0;
    for(i=2;i<=sqrt(n);i++)
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
int pal(int n)
{
    int i,rev=0,r;
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==i)
        return true;
    else
        return false;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i))
        {
           if(pal(i))
           {
               printf("%d",i);
               break;
           }
        }
    }
}
