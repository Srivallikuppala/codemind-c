#include<stdio.h>
int pal(int n)
{
    int r,rev=0,l;
    l=n;
    while(n!=0)
    {
       r=n%10;
       rev=(rev*10)+r;
       n=n/10;
    }
    if(l==rev)
    return true;
    else
    return false;
}
int main()
{
    int n,i,j,p,q;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i))
        {
            //printf("%d ",i);
            p=i;
            break;
        }
    }
    for(j=n-1;;j--)
    {
        if(pal(j))
        {
          // printf("%d ",j);
            q=j;
            break;
        }
    }
    if(p-n<n-q)
    printf("%d",p);
    else if(p-n>n-q)
    printf("%d",q);
    else if(p-n==n-q)
    printf("%d %d",q,p);
}