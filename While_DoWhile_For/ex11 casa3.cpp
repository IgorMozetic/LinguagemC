#include<stdio.h>
#include<conio.h>

int main()
{
	int g, h;
	printf("entre com o numero da tabuada: ");
	scanf("%d", &h);
	for(g=0; g<=10; g++)
	{
			printf("%d x %d = %d \n", h, g, h*g);
	}
	getch ();
	return 0;
}	
