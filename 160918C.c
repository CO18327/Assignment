#include<stdio.h>
int main()
{
float a,b,c;
printf("ENTER THE THREE SIDES OF A TRIANGLE\n");
scanf("%f%f%f",&a,&b,&c);
if((a+b>c) && (b+c>a) && (c+a>b))
printf("\n1\n");
else
printf("\n0\n");
return 0;
}

