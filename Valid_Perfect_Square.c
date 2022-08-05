#include<stdio.h>
int main()
{
    int n;
    scanf("%d
",&n);
    int ar[n],i,j,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<ar[i];j++)
        {
            if(j*j==ar[i])
            {
                count=1;
                break;
            }
            else
            {
                count=0;
            }
        }
        if(count==1)
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