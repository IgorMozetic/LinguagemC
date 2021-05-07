#include<stdio.h>
#include<conio.h>

int main ()
{
	float area, comprimento, raio;
	printf("entre com o raio da circuferencia: ");
	scanf("%f", &raio);
	area=3.1416*(raio*raio);
	printf("a area do circulo eh: %6.2f", area);
	comprimento=2*3.1416*raio;
	printf("o comprimento do circulo eh: %6.2f", comprimento);
	
	getch();
	return 0;
}
