#include<stdio.h>

int main()
{
	int a,b,c,d;
	double e,f;
	scanf("%d%d%lf\n%d%d%lf",&a,&b,&e,&c,&d,&f);
	printf("VALOR A PAGAR: R$ %.2lf",b*e+d*f);
	return 0;
 } 
