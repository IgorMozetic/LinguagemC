#include<stdio.h>
#include<conio.h>

int main()
{
	float ap, lp, aa, la, r1, r2;
	printf("entre com largura do azulejo(cm): ");
	scanf("%f", &la);
	printf("entre com a altura do azulejo(cm): ");
	scanf("%f", &aa);
	printf("entre com a largura da parede(m): ");
	scanf("%f", &lp);
	printf("entre com a altura da parede(m): ");
	scanf("%f", &ap);
	la=la/100;
	aa=aa/100;
	r1=la*aa;
	r2=lp*ap;
	r2=r2/r1;
	printf("a quantidade de azulejos eh: %6.2f", r2);
	
	getch();
	return 0;
}
