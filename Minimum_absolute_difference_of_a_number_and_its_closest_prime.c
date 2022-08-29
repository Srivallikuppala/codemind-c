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
int main()
{
    int a,i,min=0,max=0;
    scanf("%d",&a);
    for(i=a;;i++)
    {
        if(prime(i))
        {
        max=i;
        break;
        }
    }
    for(i=a;;i--)
    {
        if(prime(i))
        {
            min=i;
            break;
        }
    }
    int x=a-min;
    int y=max-a;
    if((x<y))
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}