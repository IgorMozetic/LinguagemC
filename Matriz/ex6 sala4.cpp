#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[8], b[8], i;
	for(i=0;i<8;i++)
	{
		printf("entre com o elemento: ");
		scanf("%d", &a[i]);
		b[i]= pow(a[i],2);
		printf("o resultado eh: %d\n", b[i]);
	}
	getch();
	return 0;
}
