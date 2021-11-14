#include<stdio.h>
int main()
{
	int s,v,t,h=7,m=60;
	scanf("%d%d",&s,&v);
	t=(s+v-1)+10;
	while(t>60)
	{
		t=t-60;
		h=h-1;
		if(h==0)
		{
			h=24;
		}
	}
	m=m-t;
	if(h==24)
	{
		h=0;
	}
	printf("%02d:%02d",h,m);
}

