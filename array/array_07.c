// even element total.
#include<stdio.h>
int main()
{
	int a[10],sum=0,sum1=0,i,total;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
		
			printf("\n a[%d] %d",i,a[i]);
			sum=sum+a[i];
		}
		else
		{
			printf("\n a[%d] %d",i,a[i]);
			sum1=sum1+a[i];
			
		
		}
				
	}	
	
	
 	printf("\n odd element total=%d",sum);
	printf("\n even element total=%d",sum1);
	total=sum+sum1;
	printf("\n total of all element=%d",total);
}