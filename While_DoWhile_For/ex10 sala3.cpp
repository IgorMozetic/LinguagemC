#include<stdio.h>
#include<conio.h>

int main ()
{
	int g, h;
	h=0;
	for(g=0; g<=500;g++)
	{
		if (g % 2 == 0)
		{
			h=h+g;
		}
	}
	printf("a soma dos numeros de 1 ate 500 eh: %d", h);
	getch ();
	return 0;
}
