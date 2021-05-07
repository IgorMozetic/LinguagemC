#include<stdio.h>
#include<conio.h>

	int main()
	{ 
        float prestacao, valor, taxa , tempo;
        printf("entre com o valor: ");
        scanf("%f", &valor);
        printf("entre com a taxa: ");
        scanf("%f", &taxa);
        printf("entre com o tempo: ");
        scanf("%f)", &tempo);
        prestacao=valor+(valor*(taxa/100)*tempo);
        printf("os valores das prestacoes são: %f", prestacao);
        
        getch();
        return 0;
    }
