#include<stdio.h>
#include<conio.h>

int main ()
{
    float valor1, valor2, diferenca;
    printf("entre com o valor1: ");
    scanf("%f", &valor1);
    printf("entre com o valor2: ");
    scanf("%f", &valor2);
    if (valor1==valor2)
    printf("os numeros digitados sao iguais, entao nao ha diferenca entre eles\n");
    else
        if (valor1<valor2)
    {
        diferenca=valor2-valor1;
    }
    else 
    {
        diferenca=valor1-valor2;
    }
    printf("a diferenca entre os numeros eh: %6.2f", diferenca);
    
    getch ();
    return 0;
}
