#include<stdio.h>
#include<conio.h>

int main ()
{
	int i, numchave;
	printf("entre com um numero inteiro: ");
	scanf("%i", &i);
	numchave=20;
	{
		if ((i>=0) && (i<=100))
		i=(i-numchave);
		if (i<0)
		i=(i*-1);
		else 
		printf("a distancia do numero digitado e o numero chave eh: %i", i);
	}
	printf("numero digitado incorreto");
	
	getch ();
	return 0;
}
