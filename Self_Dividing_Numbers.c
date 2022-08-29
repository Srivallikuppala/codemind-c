#include<stdio.h>
int self(int n)
{
    int m,count=0,d,c=0;
    //scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        c++;
       d=n%10;
       if(d!=0&&m%d==0)
       {
       count++;
       }
       else 
       {
       count=0;
       break;
       }
       n=n/10;
    }
   /* if(count==c)
    printf("true");
    else
    printf("false");*/
    
   if(count==c)
    return 1;
    else
    return 0;
}
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
        else
        {
            continue;
        }
    }
}