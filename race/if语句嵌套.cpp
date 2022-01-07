#include<stdio.h>

int main()
{
	double a,b,c,d,p,y;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	p=(a*2+b*3+c*4+d*1)/10;
	printf("Media: %.1lf\n",p);
	if(p>=7)
	printf("Aluno aprovado.\n");
	else if(p<5.0)
	printf("Aluno reprovado.\n");
	else if(p>=5.0&p<7.0)
	{
		printf("Aluno em exame.\n");
		scanf("%lf",&y);
		printf("Nota do exame: %.1lf\n",y);
		if(((p+y)/2)>=5.0)
		printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");	
		printf("Media final: %.1lf",(p+y)/2);
	}
	return 0;
	
}
