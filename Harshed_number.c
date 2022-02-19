#include<stdio.h>
int main()
{
    int a,sum=0,n,i;
    scanf("%d",&a);
    for(i=10;i<100000;i=i*10)
    {
        n=a%i;
        n=(n*10)/i;
        sum=sum+n;
    }
    if(a%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}