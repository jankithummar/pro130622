#include<stdio.h>
int main()
{
char i;
for(i=1;i<=26;i+=4)
{
if                     (i%2==1)
	printf("\t%c",i+64);
	printf("\t%c",i+64+34);
}
return 0;
}
