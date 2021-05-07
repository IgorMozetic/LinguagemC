#include<stdio.h>
#include<conio.h>

int main ()
{
	float g, h, i;
	printf("entre com tres numeros difernetes: \n");
	scanf("%f", &g);
	scanf("%f", &h);
	scanf("%f", &i);
	
		if ((g>h) && (g>i) && (h>i))
		{
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,g ,i, h);
		}
		else
		if ((g>h) && (g>i) && (i>h))
		{
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,g ,h, i);
		}
		else
		if ((h>g) && (h>i) && (g>i))
		{	
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,h ,i, g);
		}
		else
		if ((h>g) && (h>i) && (i>g))
		{
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,h ,g, i);
		}
		else
		if ((i>g) && (i>h) && (g>h))
		{	
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,i ,h, g);
		}
		else
		if ((i>g) && (i>h) && (h>g))
		{	
			printf("o valor maior, o valor menor e o valor do meio são respectivamente : %.2f %.2f %.2f " ,i ,g, h);
		}
		else
		printf("os valores estao invalidos");
	
	
	getch ();
	return 0;
}
