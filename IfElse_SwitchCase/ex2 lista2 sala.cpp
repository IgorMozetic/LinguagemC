#include<stdio.h>
#include<conio.h>

int main ()
{
	float n1, n2, media, notaexame, novamedia;
	printf("entre com a nota 1: ");
	scanf("%f", &n1);
	printf("entre com a nota 2: ");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if (media>=6.0)
	{
		printf("aluno aprovado com media: %.2f", media);
	}
	else
	{
		printf("entre com a nota do exame: ");
		scanf("%f", &notaexame);
		novamedia=(notaexame+media);
	if (novamedia>=5.0)
	{
		printf("aluno aprovado em exame com media %.2f", novamedia);
	}
	else
	{
		printf("aluno reprovado com media: %.2f", novamedia);
	}
	}
	
	getch ();
	return 0;
}
