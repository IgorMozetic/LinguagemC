#include<stdio.h>
#include<conio.h>
int main()
{
    int a[7], b[7], c[7][2], g, h, i;
    printf("entre com os elementos da matriz a: ");
    for(g=1;g<=7;g++)
    {
        scanf("%d", &a[g]);
    }
    printf("entre com os elementos da matriz b: ");
    for(g=1;g<=7;g++)
    {
        scanf("%d", &b[g]);
    }
    for(h=1;h<=7;h++)
    {
        c[h][1]= b[h]; 
        c[h][0]= a[h]; 
        printf("matriz c primeira coluna: %d\n", c[h][0]);
        printf("matriz c segunda coluna: %d\n", c[h][1]);    
    }
    getch();
    return 0;
}
