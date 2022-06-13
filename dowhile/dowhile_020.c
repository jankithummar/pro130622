
#include<stdio.h>
int main()
{
int  i=1,fn=0,sn=1,tn,n;
printf("enter n=");
scanf("%d",&n);
printf("%d",sn);
do
{
tn=fn+sn;
printf("\t%d",tn);
i++;
fn=sn;
sn=tn;

}while(i<=n);
return 0;
}