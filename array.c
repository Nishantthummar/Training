#include<stdio.h>
int main()
{
	char a[15]="Nishant Thummar";
	int i,count=0;
	for(i=0;i<=14;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}

