#include<stdio.h>
int main()
{
	int i,x,r,n,pd=1,sd=0;
	scanf("%d",&n);
	for(i=10;i<10000000;i=i*10)
	{
		x=n%i;
		x=(x*10)/i;
		n=n-x;
		if(x!=0)
		{
		pd=pd*x;
	    }
	    sd=sd+x;
	}
	r=pd-sd;
	printf("%d",r);
	return 0;
}