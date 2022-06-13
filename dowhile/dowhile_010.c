#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		printf("%c-%c\t",i+64,i+64+32);
		i++;	
	}while(i<=26);

}