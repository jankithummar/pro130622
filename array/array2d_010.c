#include<stdio.h>
int main()
{
int i,j,a[3][3],usum=0,lsum=0,dsum=0;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}


}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t%d",a[i][j]);
	}
	printf("\n");

}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			if(i<j)
			{
				usum+=a[i][j];
			}
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{	
			if(i>j)
			{
				lsum+=a[i][j];
			}
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{	
			if(i==j)
			{
				dsum+=a[i][j];
			}
			}
		}
		printf("\ntotal of upper triangle=%d",usum);
		printf("\ntotal of lower triangle=%d",lsum);
		printf("\ntotal of daigonal triangle=%d",dsum);
return 0;
}