#include<stdio.h>
#include<conio.h>
int main()
{
    int a[12], b[12], c[12], g, h, i;
    printf("entre com os valores de a: \n");
    for(g=1;g<=12;g++)
    {
        scanf("%d", &a[g]);
    }
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(a[g]>a[h])
    {
        i=a[g];
        a[g]=a[h];
        a[h]=i;
    }  
    }
    printf("entre com os valores de b: \n");
    for(g=1;g<=12;g++)
    {
        scanf("%d", &b[g]);
    }
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(b[g]>b[h])
    {
        i=b[g];
        b[g]=b[h];
        b[h]=i;
    }  
    }
    for(g=1;g<=12;g++)
    {
        c[g]=a[g]+b[g];
    }
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(c[g]>c[h])
    {
        i=c[g];
        c[g]=c[h];
        c[h]=i;
    }  
    }
        for(g=1;g<=12;g++)
    {
    printf("a matriz de c eh: %d\n", c[g]);
    }
    getch();
    return 0;
}
