// odd element total.
#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
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
				
	}	
	
	
 	printf("\n odd  element total=%d",sum);
}