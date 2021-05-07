#include<stdio.h>
#include<conio.h>
int main()
{
    int i[12], g, h, j;
    for(g=1;g<=12;g++)
    {
        printf("entre com o elemento: ");
        scanf("%d", &i[g]);
    }
    for(g=1;g<=12;g++) 
    {
        for(h=g+1;h<=12;h++)
    {
    if(i[g]<i[h])
    {
        j=i[g];
        i[g]=i[h];
        i[h]=j;
    }       
    }
    printf("os valores sao: %d\n", i[g]);}
    getch();
    return 0;
}       
