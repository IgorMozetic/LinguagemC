#include<stdio.h>
#include<conio.h>
#include<string.h>
int i, j, a[30], b[30];
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
int juncao(int *ax, int *bx)
{
    int c[60];
    for(i = 0; i <= 29; i++)
		c[i] = a[i];
	for(i = 0, j = 30; j < 60; j++, i++)
        c[j] = b[i];
    for(i=0; i < 60; i++)
        printf("%d\n", c[i]);
    getch();
}
int main()
{
    int *ax, *bx;
    ler_matrizA();
    ler_matrizB();
    ax=&a[30];
    bx=&b[30];
    juncao(ax, bx);
    getch();
    return 0;
}
