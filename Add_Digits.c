#include<stdio.h>
int main()
{
    int x,n,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
       x=n%10;
       s=s+x;
       n=n/10;
       if(n==0 && s>9)
       {
           n=s;
           s=0;
       }
    }
    printf("%d",s);
}
