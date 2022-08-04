#include<stdio.h>
int main()
{
    int n,u;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    u=1;
    for(j=a[i];j>0;j--)
    {
        u=u*j;
    }
    printf("%d
",u);
    }
}