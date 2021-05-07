#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{ 
    int g;
    float h;
    for( g=15; g<200; g++)
    {
        h=pow ( g, 2);
        printf(" %.0f\n", h);
    }
    getch ();
    return 0;
}
