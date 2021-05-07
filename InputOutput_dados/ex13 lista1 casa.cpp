#include<stdio.h>
#include<conio.h>

int main ()
{
	float s, tempo, s0, v0, a;
	s0=2.0;
	v0=3.0;
	a=10.0;
	printf("entre com o valor do tempo(segundos): ");
	scanf("%f", &tempo);
	s=(s0+v0)*tempo+(a/2)*(tempo*tempo);
	printf("o valor do movimento unforme variado eh: %6.2f", s);
	
	getch();
	return 0;
}
	
