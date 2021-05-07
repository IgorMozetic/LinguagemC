#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b;
	printf("entre com o valor de a: ");
	scanf("%f", &a);
	printf("entre com o valor de b: ");
	scanf("%f", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("o novo valor de a eh: %6.2f", a);
	printf("o novo valor de b: %6.2f", b);
	
	getch ();
	return 0;
}
