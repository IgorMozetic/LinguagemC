#include<stdio.h>
#include<conio.h>
int main()
{
    int a[15], b[15], g, h, i, fat;
    printf("entre com os valores: \n");
    for(g=1;g<=14;g++)
    {
        scanf("%d", &a[g]);
    }
    for(g=1;g<=14;g++)
    {
        fat=1;
        h=1;
        while(h<=a[g])
        {
        fat=fat*h;
        h++;
        }    
    b[g]=fat;
    }
    for(g=1;g<=13;g++)
    for(h=g+1;h<=14;h++)
    {
        if(b[g]>b[h])
    {
        i=b[g];
        b[g]=b[h];
        b[h]=i;
    }  
    }
     for(g=1;g<=14;g++)
    {
        printf("a matriz de b eh: %d\n", b[g]);
    }
    getch();
    return 0;
}
