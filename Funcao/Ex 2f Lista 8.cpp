#include<stdio.h>
#include<conio.h>
int fibonacci();
int fibonacci(int valor)
{
    int a=1, b=0, c, cont;
	for(cont=1; cont<=valor; cont++)
	{
		printf("%d\n", a);
		c=b;
		b=a;
		a=b+c;
	}
	getch ();
}
int main()
{
    int valor=1;
    printf("entre com o valor para ser efetuado o fibonacci: ");
    scanf("%d", &valor);
    fibonacci(valor);
    getch();
    return 0;
}
