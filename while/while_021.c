#include<stdio.h>
int main()
{
float i=0.5,j=0.5;
int n;
printf("enter n=");
scanf("%d",&n);
while(i<=n)
{

printf("%.2f\t",j);
j+=i;
i++;

}
return 0;
}