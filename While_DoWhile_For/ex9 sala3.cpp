#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int g, h, i;
	printf("entre com dois valores: ");
	scanf("%d %d", &g, &h);
	i=pow(g,h);
	printf("a elevacao do primeiro numero pelo segundo eh: %d", i);
	getch ();
	return 0;
}
