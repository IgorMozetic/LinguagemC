#include<stdio.h>
#include<conio.h>

int main()
{
	float notamedia, notafinal;
	printf("entre com a nota da media: ");
	scanf("%f", &notamedia);
	notamedia=notamedia*10;
	notafinal = notamedia;
	notamedia=((int)notamedia % 10);
	if (notamedia > 5)
	notafinal=(notafinal-notamedia)+10;
	else
	notafinal=(notafinal-notamedia);
	printf("a nota final eh: %.2f", (notafinal/10));
	
	getch();
	return 0;
}
