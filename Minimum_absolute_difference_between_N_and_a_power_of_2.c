#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,r;
    scanf("%d",&n);
    int x=(log2(n));
    l=pow(2,x);
     r=l*2;
    if(n-l<r-n)
    printf("%d",n-l);
    else
    printf("%d",r-n);
}