#include<stdio.h>
#include<conio.h>

	int main()
	{ 
        float custo;
		int nr_coelhos;
        printf("entre com numero de coelhos: ");
        scanf("%i", &nr_coelhos);
        custo=(nr_coelhos*0.70)/18+10;
        printf("o valor do custo eh: %6.2f", custo);
        
        getch();
        return 0;
    }
