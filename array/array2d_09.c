#include<stdio.h>
int main ()
{
	int  i,j,a[3][3],b[3][3],sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
printf("\n \t\tmatrix A\t\tmatrix B\t\tsum\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\t");
		
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\t");
			
		for(j=0;j<3;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("\t%d",sum);
		}
		
		
			printf("\n");
	}


	
}