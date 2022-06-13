// even possition element total.
#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i+=2)
	{
		
		printf("\n a[%d] %d",i,a[i]);
		sum=sum+a[i];
				
	}	
	
	
 	printf("\n even possition element total=%d",sum);
}