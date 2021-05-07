#include<stdio.h>
#include<conio.h>

int main()
{
	float dolar, real;
	printf("entre com o real: ");
	scanf("%f", &real);
	dolar=real/2.40;
	printf("o valor do dolar eh: %6.2f", dolar, real);
	
	getch();
	return 0;	
}
