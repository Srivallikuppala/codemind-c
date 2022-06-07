#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int temp=n;
  while(temp!=1)
  {
      if(temp%2==0)
      temp=temp/2;
      else if(temp%3==0)
      temp=temp/3;
      else if(temp%5==0)
      temp=temp/5;
      else
      {
          count=1;
          break;
      }
  }
   if(count==1)
   printf("Not Ugly Number");
   else if(count==0)
   printf("Ugly Number");
}