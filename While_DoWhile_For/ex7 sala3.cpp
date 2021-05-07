#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int g, h;
	for( g=0; g<=15; ++g)
	{
		h=pow(3,g);
		printf("3 elevado %d = %d\n", g, h);
	}
	getch ();
	return 0;
}
