#include <stdio.h>
#include <math.h>

void kvur(int a, int b, int c);

int main()
{
	int a, b, c;
	
	printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);
	
	kvur(a, b, c);
	
	return 0;
}

void kvur(int a, int b, int c)
{	
	float d, x1, x2;
	
	d=(b*b)-(4*a*c);
	
	if (d==0)
	{
		x1=((-1)*b)/(2*a);
		printf("x = %.2f", x1);
	}
	
	if(d>0)
	{
		d=sqrt(d);
		x1=(((-1)*b)+d)/(2*a);
		x2=(((-1)*b)-d)/(2*a);
		printf("x1 = %.2f\nx2 = %.2f", x1, x2);
	}
	
	if(d<0)
		printf("No answer");
}