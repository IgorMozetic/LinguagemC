#include<stdio.h>
#include<conio.h>

int main ()
{
	float area, volume, raio;
	printf("entre com o raio da esfera: ");
	scanf("%f", &raio);
	volume=(4*3.1416*(raio*raio*raio))/3;
	area=4*3.1416*(raio*raio);
	printf("o volume da esfera eh: %6.2f", volume);
	printf("a area da esfera eh: %6.2f", area);
	
	getch ();
	return 0;
}
