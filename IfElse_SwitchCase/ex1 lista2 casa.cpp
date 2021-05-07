#include<stdio.h>
#include<conio.h>

int main ()
{
	int i;
	printf("entre com um numero inteiro: ");
	scanf("%i", &i);
	if(i % 2==0)
	{
	printf("o numero digitado eh par");
	}
	else
	
	{
		printf("o numero digitado eh impar");
	}
	getch ();
	return 0;
}
