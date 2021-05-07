#include<stdio.h>
#include<conio.h>

int main ()
{
	float salbr, salliq, hrs, adic;
	printf("ente com o salario bruto: ");
	scanf("%f", &salbr);
	printf("entre com a quantidade de horas trabalhas: ");
	scanf("%f", &hrs);
	if (hrs>160)
	{
		hrs=(hrs-160);
		adic=((salbr/160)+(hrs*0.50));
		salbr=(salbr+adic);
	}
	if (salbr<800.00)
	{
		salliq=salbr;
		printf("o salario liquido eh: %.2f", salliq);
	}
	else 
	if ((salbr>=800.00) && (salbr<=1600.00))
	{
		salliq=(salbr-(salbr*0.13));
		printf("o salario liquido eh: %.2f", salliq);
	}
	else 
	{
		salliq=(salbr-(salbr*0.22));
		printf("o salario liquido eh: %.2f", salliq);
	}
	
	getch ();
	return 0;
}
