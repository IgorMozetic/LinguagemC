#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], i, b[5];
	for(i=0;i<5;i++)
	{
		printf("entre com os elementos: ");
		scanf("%d", &a[i]);
		b[i]=a[i]*3;
		printf("o resultado eh: %d\n", b[i]);
	}
	getch();
	return 0;
}
