#include<stdio.h>

int main()
{
    long long x,n,m=1,i=0;
	scanf("%lld%lld",&x,&n);
	for(i=0;i<n;i++)
	{
		m+=m*x;
	}
	printf("%lld\n",m);
	return 0;
}

