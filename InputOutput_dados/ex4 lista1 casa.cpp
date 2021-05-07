#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, area, perimetro;
	printf("entre com a medida do lado a: ");
	scanf("%f", &a);
	printf("entre com a medida de b: ");
	scanf("%f", &b);
	area=a*b;
	printf("o valor da area eh: %6.2f", area);
	perimetro=(2*a)+(2*b);
	printf("o valor do perimetro eh: %6.2f", perimetro);
	
	getch ();
	return 0;
}
