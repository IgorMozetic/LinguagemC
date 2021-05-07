#include<stdio.h>
#include<conio.h>

int main ()
{
	float c,f;
	printf("Entre com a temperatura:\n");
	scanf ("%f", &f);
	c=(((f-32)*5)/9);
	printf("O valor da temperaturaem celsius eh: %f", c);
	
	getch();
	return 0;
}
