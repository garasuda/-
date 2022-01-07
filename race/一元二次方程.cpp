#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,y1,y2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c<0 || a==0)
	printf("Impossivel calcular");
	else
	{
		y1=(-1*b+sqrt(b*b-4*a*c))/2/a;
		y2=(-1*b-sqrt(b*b-4*a*c))/2/a;
		printf("R1 = %.5lf\nR2 = %.5lf",y1,y2);
	}
	return 0;
	
}
