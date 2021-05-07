#include<stdio.h>
#include<conio.h>

int main ()
{
    int g, h;
    printf("o valor de g eh: ");
    scanf("%i", &g);
    if (g<0)
    {
        h=(g*-1);
    }
    else
    {
        h=g;
    }
        printf("o valor do modulo deste numero eh: %i", h);
        
    getch ();
    return 0;
}

