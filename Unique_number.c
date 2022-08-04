#include<stdio.h>
int main()
{
    int n,m,c=0,count=0,i,j,d;
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        m=m/10;
        c++;
    }
    int ar[c];
    m=n;
    for(i=0;i<c;i++)
    {
        d=m%10;
        m=m/10;
        ar[i]=d;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    if(count==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}