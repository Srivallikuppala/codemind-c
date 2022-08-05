#include<stdio.h>
int rev(int x)
{
    int r,rev=0;
    while(x!=0)
    {
    r=x%10;
    rev=rev*10+r;
    x=x/10;
    }
   // printf("%d ",rev);
    return rev;
}
int main()
{
    int n,n1,x,y;
    scanf("%d",&n);
    n1=rev(n);
    //printf("%d ",n1);
    x=n*n;
    y=n1*n1;
    int z=rev(y);
   // printf("%d %d ",x,y);
    if(x==z)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}