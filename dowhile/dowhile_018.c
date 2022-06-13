
#include<stdio.h>
int main()
{
int  i=1,j=1,n;
printf("enter n=");
scanf("%d",&n);
do
{
printf("\t%d",i*j);
i=i*2;
j++;
}while(i<=n);
return 0;
}