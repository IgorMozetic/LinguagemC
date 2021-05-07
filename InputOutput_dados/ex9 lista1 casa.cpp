#include<stdio.h>
#include<conio.h>

int main ()
{
	float p1, p2, media, atividade;
	printf("entre com a nota da prova 1: ");
	scanf("%f", &p1);
	printf("entre com a nota da prova 2: ");
	scanf("%f",&p2);
	printf("entre com a nota das atividades do semestre: ");
	scanf("%f", &atividade);
	media=((p1*4)+(p2*4)+(atividade*2))/10;
	printf("a media final eh: %6.2f", media);
	
	getch ();
	return 0;
}
