#include<stdio.h>
int reverse(int n)
{
    int rev=0,r;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ar[i]==reverse(ar[i]))
        {
          printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}