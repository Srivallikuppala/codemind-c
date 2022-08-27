#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
 /*for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }*/
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            
            if(ar[i]==ar[j])
            {
                count++;
            }
        }
            if(count==1)
            {
                printf("%d",ar[i]);
                break;
            }
    }
}