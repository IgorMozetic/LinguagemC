#include<stdio.h>
#include<conio.h>

int main ()
{
	int g, h, R, f;
	char conta;
	char escolha;
	printf ("Para sair precione f\n");
	do
	{
		printf ("Digite sua operacao: ");
		scanf ("%c", &conta);
		printf("digite um numero: ");
		scanf("%d", &g);
		printf("digite outro numero: ");
		scanf("%d", &h);
		switch (conta)
		{
			case '-': printf("o resultado eh:  %d\n", R=g-h); break;
			case '+': printf("o resultado eh:  %d\n", R=g+h); break;
			case '*': printf("o resultado eh:  %d\n", R=g*h); break;
			case '/': printf("o resultado eh:  %d\n", R=g/h); break;
			default: printf("operacao invalida\n");
		}
		printf ("Para sair precione f\n");
		scanf("%c", &escolha);
		if (escolha == f)
		{
            printf("calculadora fechada!");
    	}
    }
        while( escolha != f);
	    getch ();
    	return 0;
}
