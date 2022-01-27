#include<stdio.h>
int main()
{
	int i,x,n,pd=1,sd=0;
	scanf("%d",&n);
	for(i=10;i<10000000;i=i*10)
	{
		x=n%i;
		x=(x*10)/i;
		if(x!=0)
		{
		pd=pd*x;
	    }
	    sd=sd+x;
	}
	if(sd==pd)
	{
	printf("Spy Number");
    }
    else
    {
    printf("Not Spy Number");
    }
}