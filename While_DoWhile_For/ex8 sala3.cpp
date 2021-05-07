#include<stdio.h>
#include<conio.h>

int main()
{
	int g, h, i, j;
	h=1;
	i=1;
	for (g=1; g<=15; g++)
	{
		if(g==0)
		{
		printf("%d\n %d\n",h, i );
		}
	else 
	{
		j=i;
		i=h;
		h=j+i;
		printf(" %d\n", h);
	}
	}
	getch ();
	return 0;
}
