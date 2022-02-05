#include<stdio.h>
int main()
{
	int m,i,n,t,r,count=0;
	scanf("%d",&t);
	while(t-->0)
	{
		count=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		r=i%10;
		if(r==3 || r==2 || r==9)
		count++;
	}
	printf("%d
",count);
    }
}