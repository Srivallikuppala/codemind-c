#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0,r,n1,i1;
    scanf("%d",&n);
    for(i=2;i<sqrt(n);i++)
    {
       if(n%i==0)
        {
           count=count+1; 
           break;
        }
    }
    if(count!=0)
    {
        printf("Not Mega Prime");
    }
    else
    {
        n1=n;
        while(n1>0)
        {
            r=n1%10;
           if(r==2||r==3||r==5||r==7)
           {
           r=r;
           }
           else
           {
              printf("Not Mega Prime");
              i1=1;
              break;
           }
           n1=n1/10;
        }
        if(i1!=1)
        {
        printf("Mega Prime");
        }
    }
}