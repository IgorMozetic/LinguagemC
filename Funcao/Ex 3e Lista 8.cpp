#include<stdio.h>
#include<conio.h>
int g, h, aux;
int matrizes();
int matrizes(int *a, int *b)
{
    int c[12];
    printf("crescente: \n");
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(a[g]>a[h])
    {
        aux=a[g];
        a[g]=a[h];
        a[h]=aux;
    } 
    }
    for(g=1;g<=12;g++)
    {
    printf("%d\n", a[g]);
    }
    printf("crescente: \n");
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(b[g]>b[h])
    {
        aux=b[g];
        b[g]=b[h];
        b[h]=aux;
    }  
    }
    for(g=1;g<=12;g++)
    {
    printf("%d\n", b[g]);
    }
    for(g=1;g<=12;g++)
    {
        c[g]=a[g]+b[g];
    }
    printf("soma das matrizes: ");
    for(g=1;g<=11;g++)
    for(h=g+1;h<=12;h++)
    {
        if(c[g]>c[h])
    {
        aux=c[g];
        c[g]=c[h];
        c[h]=aux;
    }  
    }
    for(g=1;g<=12;g++)
    {
    printf("%d\n", c[g]);
    }
    getch();
}
int main()
{
    int a[12], b[12];
    printf("entre com os valores de a: \n");
    for(g=1;g<=12;g++)
    {
        scanf("%d", &a[g]);
    }
    printf("entre com os valores de b: \n");
    for(g=1;g<=12;g++)
    {
        scanf("%d", &b[g]);
    }

    matrizes(a, b);
    getch();
    return 0;
}
