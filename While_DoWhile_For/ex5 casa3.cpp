#include<stdio.h>
#include<conio.h>

int main()
{
	int g;
	
	for (g=1; g<=20; g++)
	{
		if (g % 2 == 1)
		printf("%d\n", g);
	}
	getch();
	return 0;
}
