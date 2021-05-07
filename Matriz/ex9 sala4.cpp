#include<stdio.h>
#include<conio.h>
int main()
{
		int codigo;
	printf("entre com o numero de 1 a 5: ");
	scanf("%d", &codigo);
	switch (codigo)
	{
		case 1: printf("engenharia");break;
		case 2: printf("edificacoes");break;
		case 3: printf("sistemas eletricos");break;
		case 4: printf("turismo");break;
		case 5: printf("analise de sistemas");break;
		default:printf("invalido");
	}
	getch();
	return 0;
}
