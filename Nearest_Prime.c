#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,count=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    return true;
    else
    return false;
}
int main()
{
    int n,i,j,k,max=0,min=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=ar[i];;j++)
        {
            if(prime(j))
            {
                max=j;
                break;
            }
        }
        for(k=ar[i];;k--)
        {
            if(prime(k))
            {
                min=k;
                break;
            }
        }
        int x=ar[i]-min;
        int y=max-ar[i];
      //  printf("%d %d  %d ",min,max,ar[i]);
        int n=ar[i];        
        if(x<=y)
        printf("%d
",min);
        else
        printf("%d
",max);
    }
}