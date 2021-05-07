#include<stdio.h>
#include<conio.h>

	int main()
	{
        float a, b, c;
        printf("entre com a: ");
        scanf("%f", &a);
        printf("entre com b: ");
        scanf("%f", &b);
        c=a;
        a=b;
        b=c;
        printf("os valores de a e b: %f, %f", a, b);
        
        getch();
        return 0;
    }
