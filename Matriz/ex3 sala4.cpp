#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[5], i;
	for(i=0;i<5;i++)
	{
		printf("entre com os elementos: ");
		scanf("%d", &a[i]);
		printf("entre com os elementos: ");
		scanf("%d", &b[i]);
		c[i]= a[i]-b[i];
		printf("o resultado eh: %d\n", c[i]);
	}
	getch();
	return 0;
}
