#include<stdio.h>
int main()
{
    int n,tw,amt=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&tw);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=tw)
        {
            amt=amt+1;
        }
        else if(arr[i]>tw)
        {
            amt=amt+2;
        }
    }
    printf("%d",amt);
}