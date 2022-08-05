#include<stdio.h>
int main()
{
    int n,g=0,i,e,x;
    scanf("%d
",&n);
    int a[n];
    for(i=0;i<n;i++)
    { 
        scanf("%d ",&a[i]);
        if(a[i]>g)
        {
            g=a[i];
        }
    }
    scanf("
%d",&e);
    for(i=0;i<n;i++)
    {
        x=a[i]+e;
        if(x>=g)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
        
    }
}