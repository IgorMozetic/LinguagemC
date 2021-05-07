#include<stdio.h>
#include<conio.h>

int main ()
{
    int n1, n2, n3, n4, n5;
    printf("entre com o primeiro numero: ");
    scanf("%i", &n1);
    printf("entre com o segundo numero: ");
    scanf("%i", &n2);
    printf("entre com o terceiro numero: ");
    scanf("%i", &n3);
    printf("entre com o quarto numero: ");
    scanf("%i", &n4);
    printf("entre com o quinto numero: ");
    scanf("%i", &n5);
    if ((n1>n2) && (n1>n3) && (n1>n4) && (n1>n5))
    {
        printf("o maior numero eh: %i\n", n1);
    }
    else
    if ((n2>n1) && (n2>n3) && (n2>n4) && (n2>n5))
    {
        printf("o maior numero eh: %i\n", n2);
    }
    else
     if ((n3>n1) && (n3>n2) && (n3>n4) && (n3>n5))
    {
        printf("o maior numero eh: %i\n", n3);
    }
    else
    if ((n4>n1) && (n4>n2) && (n4>n3) && (n4>n5))
    {
        printf("o maior numero eh: %i\n", n4);
    }
    else
    if ((n5>n1) && (n5>n2) && (n5>n3) && (n5>n4))
    {
        printf("o maior numero eh: %i\n", n5);
    }
    if ((n1<n2) && (n1<n3) && (n1<n4) && (n1<n5))
    {
        printf("o menor numero eh: %i\n", n1);
    }
    else
   if ((n2<n1) && (n2<n3) && (n2<n4) && (n2<n5))
    {
        printf("o menor numero eh: %i\n", n2);
    }
    else
    if ((n3<n1) && (n3<n2) && (n3<n4) && (n3<n5))
    {
        printf("o menor numero eh: %i\n", n3);
    }
    else
     if ((n4<n1) && (n4<n2) && (n4<n3) && (n4<n5))
    {
        printf("o menor numero eh: %i\n", n4);
    }
    else
   if ((n5<n1) && (n5<n2) && (n5<n3) && (n5<n4))
    {
        printf("o menor numero eh: %i\n", n5);
    }
    
    getch ();
    return 0;
}
