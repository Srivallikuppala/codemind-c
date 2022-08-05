#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a=0,b=1,c=0,i=3;
      printf("%d %d ",a,b);
     while(i<=n)
     { 
         c=a+b;
          printf("%d ",c);
         a=b;
         b=c;
         i++;
     }
}