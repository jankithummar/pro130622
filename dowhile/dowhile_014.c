#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,sum=0,sum1=0;
	do
	{
		if(i%2==0)
		{
		sum=sum+i;
		printf("\n%d",sum);
		}
		else
		{
		sum1=sum1+i;
		printf("\t%d",sum1);
		}
		i++;

	}while(i<=10);
	printf("\n even number sum=%d",sum);
	printf("\t odd number sum1=%d",sum1);
	printf("\n total=%d",sum+sum1);
	getch();





}