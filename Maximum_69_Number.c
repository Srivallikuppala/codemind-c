#include<stdio.h>
int main()
{
    int n,i,q,r,c,s,a[20];
    scanf("%d",&n);
    q=n;
    i=0;c=0;
    while(q!=0)
    {
        r=q%10;
        a[i]=r;
        q=q/10;
        c=c+1;
        i++;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}