#include<stdio.h>
void main()
{
	int a1[10],a2[10];
	int i,j,no,temp,p;
	printf("\nenter the string with 10 elemnets");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("\nYou enter");
	for (i=0;i<10;i++)
	{
		printf("\n%d",a2[i]);
	
	}
	printf("enter the no of bits");
	scanf("%d",&no);
	printf("enter the position");
	scanf("%d",&p);
	//printf("\nposition is %d",p);
	printf("new series is\n");
	j=0;
	//printf("sum is%d",p+no);	
	if(p+no<=10)
	{
		for(i=p;i<p+no;i++)
		{
			//printf(" \ni is%d , j is %d",i,j);		
			a1[j]=a2[i];
			j++;
			//printf("\n%d",a1[j]);
		}
		for(i=0;i<no;i++)
		{
			printf("\n%d",a1[i]);
		}
	}
	else
	{
		printf("\nInvalid you enter");
	}
}

	
	




