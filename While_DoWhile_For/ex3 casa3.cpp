#include<stdio.h>
#include<conio.h>

int main()
{
	int g;
	g=1;
	while (g<=20)
	{
		if (g % 2 == 0)
		printf("par: %d\n", g);
		else
		printf("impar: %d\n", g);
	g++;
	}
	getch ();
	return 0;
	
}
