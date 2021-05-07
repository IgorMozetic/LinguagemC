#include<stdio.h>
#include<conio.h>

	int main()
	{
		float volume, raio, altura;
		printf("entre com o raio");
		scanf("%f", &raio);
		printf("entre com a altura");
		scanf("%f", &altura);
		volume=3.14159*raio*raio*altura;
		printf("o volume eh %f", volume);
		
		getch();
		return 0;
	}
