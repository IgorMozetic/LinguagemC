#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], b[10][3], g, h, i, fat;
    printf("entre com os elementos da matriz a: ");
    for(g=1;g<=10;g++)
    {
        scanf("%d", &a[g]);
    }
    for(g=1;g<=10;g++)
    {
        b[g][0]= a[g]+5;
        fat=1;
        h=1;
        while(h<=a[g])
        {
        fat=fat*h;
        h++;
        }    
        b[g][1]=fat;
    b[g][2]= a[g]*a[g];
    printf("a coluna 1 eh: %d\n", b[g][0]);
    printf("a coluna 2 eh: %d\n", b[g][1]);
    printf("a coluna 3 eh: %d\n", b[g][2]);
    }
    getch();
    return 0;
}        
