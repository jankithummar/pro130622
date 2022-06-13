#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{

		printf("enter a[%d] :",i);   //insert
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)         			//print
	{
		printf("\na[%d] :%d",i,a[i]);
	}
}