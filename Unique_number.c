#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int f=0,j,i=0,c=0,ar[10];
    while(n>0)
    {
        ar[i]=n%10;
        n=n/10;
        c++;
        i++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(ar[j]==ar[i])
            {
                f++;
            }
        }
    }
    if(f==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}