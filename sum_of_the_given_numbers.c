#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i][1],&arr[i][2]);
    }
    for(i=0;i<n;i++)
    {
        sum=arr[i][1]+arr[i][2];
        printf("%d
",sum);
    }
}