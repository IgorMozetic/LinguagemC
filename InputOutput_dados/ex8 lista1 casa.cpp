#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, n4, media;
	printf("entre com a nota do primeiro bimestre: ");
	scanf("%f", &n1);
	printf("entre com a nota do segundo bimestre: ");
	scanf("%f", &n2);
	printf("entre com a nota do terceiro bimestre: ");
	scanf("%f", &n3);
	printf("entre com a nota do quarto bimestre: ");
	scanf("%f", &n4);
	media=(n1+n2+n3+n4)/4;
	printf("o valor da media eh: %6.2f", media);
	
	getch();
	return 0;
}
