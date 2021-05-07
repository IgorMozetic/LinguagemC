#include<stdio.h>
#include<conio.h>
int i, j=0;
int soma();
int soma(int *n)
{
	for(i=1;i<=*n;i++)
	{
	   j=j+i;	
    }  
    printf("o valor eh: %d", j);
	getch ();
}	
int main()
{
    int *n, valor;
	printf("entre com o valor que some com todso seus antecedentes naturais: ");
	scanf("%d", &valor);
    n=&valor;
	soma(n);
	getch();
	return 0;
}
