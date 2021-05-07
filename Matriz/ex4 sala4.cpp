#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[10], i;
	for(i=0;i<5;i++)
	{
		printf("entre com o elemento A: ");
		scanf("%d", &a[i]);
		printf("entre com o elemento B: ");
		scanf("%d", &b[i]);	
	}
	for (i=0;i<10;i++)
	{
		if (i<5)
		{
			c[i]=a[i];	
		}
		else
		{
			c[i]=b[i-5];
		}
		printf("o resultado eh: %d\n", c[i]);
	}
	getch ();
	return 0;
}
