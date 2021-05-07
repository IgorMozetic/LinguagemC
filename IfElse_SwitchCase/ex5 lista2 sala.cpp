#include<stdio.h>
#include<conio.h>

int main ()
{
    float g, h, i;
    printf("entre com um valor: ");
    scanf(" %f", &g);
    printf("entre com um valor: ");
    scanf(" %f", &h);
    printf("entre com um valor: ");
    scanf(" %f", &i);
    if ((g<h) && (h<i))
    {
        printf("os valores em ordem crescente sao %6.2f %6.2f %6.2f", g, h, i);
    }
    else 
    if ((g<i) && (i<h))
    {
        printf("os valores em ordem crescente sao %6.2f %6.2f %6.2f", g, h, i);
    }
    else 
    if ((h<g) && (g<i))
    {
        printf("os valores em ordem crescente sao %6.2f %6.2f %6.2f", h, g, i);
    }
    else 
    if ((h<i) && (i<g))
    {
        printf("os valores em ordem crescentes sao %6.2f %6.2f %6.2f", h, i, g);
    }
    else 
    if ((i<g) && (g<h))
    {
        printf("os valores em ordem crescente sao %6.2f %6.2f %6.2f", i, g, h);
    }
    else 
        printf("os valores em ordem crewscente sao %6.2f %6.2f %6.2f", i, h, g);
        
        getch ();
        return 0;
}
