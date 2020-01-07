#include<stdio.h>
void main()
{
	int pwr=5,base=2,i,ans=1;
	
	for(i=1;i<=pwr;i++)
	{
		ans=ans*base;
	}
	printf("%d\n",ans);
}
