#include<stdio.h>
#include<conio.h>

int main ()
{
    int g, h;
    printf("entre com um numero: ");
    scanf(" %d", &g);
    for( h=1; h<=10; h++)
    
    printf(" %d x %d = %d\n", g, h, g*h);
    getch ();
    return 0;
}
