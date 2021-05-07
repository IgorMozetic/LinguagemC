#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float g, h, i, x1, x2, delta;
    printf(" entre com o valor de g: ");
    scanf("%f", &g);
     printf(" entre com o valor de h: ");
    scanf("%f", &h);
     printf(" entre com o valor de i: ");
    scanf("%f", &i);
    if ( g!=0)
    {
        delta=((pow(h,2))-(4*g*i));
        if (delta<0)
        printf("a equacao nao tem solucao");
        else 
        if (delta==0)
        {
            x1=((-h)/2*g);
            x2=x1;
            printf("a equacao tem duas raizereais e iguais: %6.2f %6.2f", x1, x2);
        }
        else 
        {
            x1=(-h+sqrt(delta))/(2*g);
            x2=(-h-sqrt(delta))/(2*g);
            printf("a equacao tem duas raizes reais e diferentes %6.2f %6.2f", x1, x2);
        }
    }
    else 
    printf("nao eh uma equacao do segundo grau!");
    
    getch ();
    return 0;
}
