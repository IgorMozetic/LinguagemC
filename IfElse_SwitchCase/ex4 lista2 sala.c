#include<stdio.h>
#include<conio.h>

int main ()
{
    float g, h, i;
    printf(" entre com o valor de g: ");
    scanf("%f", &g);
    printf(" entre com o valor de h: ");
    scanf("%f", &h);
    printf(" entre com o valor de i: ");
    scanf("%f", &i);
    
    if ((g<h+i) && (h<g+i) && (i<g+h))
    {
        if ((g==h) && (g==i))
        printf("estes valores formam um triangulo equilatero");
    	else 
   		if ((g==h) || (g==i) || (h==i))
		printf("estes valores formam um triangulo isoceles");
		else
		if ((g!=h) && (g!=i) && (h!=i))
		printf("estes valores formam um triangulo escaleno");
	}
	else
	printf("estes valores nao formam um triangulo");
	
    getch ();
    return 0;
}
