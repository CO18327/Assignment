#include<stdio.h>
int main()
{
int a,b,c;
printf("Please enter three integers\n");
scanf("%d%d%d",&a,&b,&c);

	if((a==b)||(a==c)||(b==c))
		printf("\n\n\n0\n");
	else if((a!=b)&&(a!=c)&&(b!=c))
		printf("\n\n\n1\n");
	else
		printf("\n\n\nERROR\n");
return 0;
}
