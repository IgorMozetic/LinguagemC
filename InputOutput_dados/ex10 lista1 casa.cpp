#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, c;
	printf("entre com o valor de a: ");
	scanf("%f", &a);
	printf("entre com o valor de b: ");
	scanf("%f", &b);
	c=a;
	a=b;
	b=c;
	printf("o novo valor de a eh: %6.2f", a);
	printf("o novo valor de b eh: %6.2f", b);
	
	getch ();
	return 0;
}
