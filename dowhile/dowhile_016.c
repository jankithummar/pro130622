#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,n;
printf("enter n=");      
scanf("%d",&n);
do
{
if(i%2==0)
{
printf("%d\t",i*i);
}
else
{
printf("%d\t",i);
}
i++;

}while(i<=n);
return 0;

}
  