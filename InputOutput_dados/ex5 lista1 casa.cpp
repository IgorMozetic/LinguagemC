#include<stdio.h>
#include<conio.h>

int main ()
{
	float imc, altura, massa;
	printf("entre com o valor da massa(kg): ");
	scanf("%f", &massa);
	printf("entre com o valor da altura(m): ");
	scanf("%f", &altura);
	imc=massa/(massa*altura);
	printf("o valor do imc eh: %6.2f", imc);
	
	getch ();
	return 0;
}
