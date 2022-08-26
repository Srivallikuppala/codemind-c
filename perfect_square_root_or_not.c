#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    x=sqrt(n);
   
    if(x*x==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}