#include<stdio.h>
int main()
{
	int i=1,j,k=65;
	do
	{
		j=1;
		do
		{
			printf("\t%c",k);
			j++;
			k++;
		
	}while(j<=5);
	printf("\n");
	}while(i<=5);
	return 0;
}
