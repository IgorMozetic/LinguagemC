#include<stdio.h>
#include<conio.h>

int main()
{
	int g;
	for (g=20; g>=1; g--)
	{
		if (g % 2 == 0)
		printf("par: %d\n", g);
		else 
		printf("impar: %d\n", g)n;
	}
	getch();
	return 0;
}
