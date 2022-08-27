#include<stdio.h>
int max(int m,int n)
{
    if(m>n)
    return m;
    else
    return n;
}
int main()
{
   int n,i,l,m=0,count=0;
   scanf("%d",&n);
   int ar[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   for(i=0;i<n;i++)
   {
       m=max(ar[i],m);
   }
   while(1)
   {
       i=0;
       count=0;
       while(i<n)
       {
           if(m%ar[i]==0)
           {
               count++;
           }
           i++;
       }
           if(count==n)
           break;
           else
           m++;
   }
   printf("%d",m);
}