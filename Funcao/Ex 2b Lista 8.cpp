#include<stdio.h>
#include<conio.h>
#include<string.h>
int i, a[30], b[30];
int ler_matrizA();
int ler_matrizB();
int juncao();
int ler_matrizA()
{
    printf("entre com os valores da matriz a: \n");
    for(i=0;i<=29;i++)
    {
        scanf("%d", &a[i]);
    }
    getch();
}
int ler_matrizB()
{
    printf("entre com os valores da matriz b: \n");
    for(i=0;i<=29;i++)
    {
        scanf("%d", &b[i]);
    }
    getch();
}
int juncao(int a[30], int b[30])
{
    int c[60];
    printf("matriz c: ");
    for (i=0;i<60;i++)
	{
		if (i<30)
		{
			c[i]=a[i];	
		}
		else
		{
			c[i]=b[i-30];
		}
		printf("%d\n", c[i]);
    }
    getch();
}
int main()
{
    ler_matrizA();
    ler_matrizB();
    juncao(a, b);
    getch();
    return 0;
}
