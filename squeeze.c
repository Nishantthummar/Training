#include<stdio.h>
void main()
{
	char s1[10],s2[10];
	char i,j,count=10,k;
	printf("\nEnter the s1 ");
	for(i=0;i<10;i++)
	{
		scanf("%c",&s1[i]);
	}
	printf("\nEnter the s2");
	for(i=0;i<10;i++)
	{
		scanf("%c",&s2[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(s1[i]==s2[j])
			{
				for(k=i;k<10-i;k++)
				{
				s1[i]=s1[i+1];
				//count--;
				printf("count =%d",count);
				}
				count--;
			}
		}
	}	
	printf("\nnew str is");
	for(i=0;i<10-count;i++)
	{
		printf("%c",s1[i]);
	
	}
}
