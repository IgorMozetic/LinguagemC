#include<stdio.h>
#include<conio.h>
int main()
{
    int a[4], b[4], c[4][2], g, h, i;
    printf("entre com os elementos da matriz a: ");
    for(g=1;g<=4;g++)
    {
        scanf("%d", &a[g]);
        c[g][0]= a[g]*2;
    }
    printf("entre com os elementos da matriz b: ");
    for(g=1;g<=4;g++)
    {
        scanf("%d", &b[g]);
        c[g][1]= b[g]-5;
    }
    for(h=1;h<=4;h++)
    {
        printf("matriz c primeira coluna: %d\n", c[h][0]);
        printf("matriz c segunda coluna: %d\n", c[h][1]);    
    }
    getch();
    return 0;
}
