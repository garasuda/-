#include<stdio.h>
#include<string.h>
int main()
{
    unsigned	int i,s=0;
	char a[201];
	gets(a);
	for(i=0;i<strlen(a);i++)
	switch(a[i])
    {
    	case('a'):
    	case('d'):
    	case('g'):
    	case('j'):
    	case('m'):
    	case('p'):
    	case('t'):
    	case('w'):
    	case(' '):s++;break;
    	case('b'):
    	case('e'):
    	case('h'):
    	case('k'):
    	case('n'):
    	case('q'):
    	case('u'):
    	case('x'):s+=2;break;
    	case('c'):
    	case('f'):
    	case('i'):
    	case('l'):
    	case('o'):
    	case('v'):
		case('y'):
		case('r'):s+=3;break;
    	case('s'):
    	case('z'):s+=4;break;
    	
	}
	printf("%d",s);
	return 0;
}
