#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1=30;
	printf("n=");
	scanf("%d",&n);
	while(n<=n1)
	{
		printf("%d\t",n++);
	}
	getch();
}