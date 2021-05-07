#include<stdio.h>
#include<conio.h>

int main ()
{
	float despaco, dtempo, vm, sfinal, sinicial, tfinal, tinicial;
	printf("entre com o espaco inicial do corpo: ");
	scanf("%f", &sinicial);	
	printf("entre com o espaco final do corpo: ");
	scanf("%f", &sfinal);
	printf("entre com o Tempo inicial do corpo: ");
	scanf("%f", &tinicial);
	printf("entre com o Tempo final do corpo: ");
	scanf("%f", &tfinal);
	dtempo=tfinal-tinicial;
	despaco=sfinal-sinicial;
	vm=despaco/dtempo;
	printf("o valor da velocidade media eh: %6.2f", vm);
	
	getch ();
	return 0;
}
