
#include<stdio.h>
int main()
{
int  i,j=1;
for(i=1;i<=10;i*=2,j++)
{
printf("\t%d",i*j);
}
return 0;
}