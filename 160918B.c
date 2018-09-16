#include<stdio.h>
int main()
{
int a,b,c;
printf("Please enter two integers N and M\n");
scanf("%d%d",&a,&b);
c=b/a;
if(b%a==0)
printf("%d",c);
else
printf("0");
}
