#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,count=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        count=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
            {
                printf("%d
",i);
            }
    }
}