#include<stdio.h>

int main()
{
	int a,b;
	double c;
	scanf("%d%d",&a,&b);
	switch(a){
	
	case 1:c=4;break;
	case 2:c=4.5;break;
	case 3:c=5;break;
	case 4:c=2;break;
	case 5:c=1.5;break;}
	printf("%.2lf",b*c);
	return 0;
	
}
