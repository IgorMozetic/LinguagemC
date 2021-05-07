#include<stdio.h>
#include<conio.h>
int main()
{
    int a[8], b[8], g, h, i, acha, jacare;
    printf("entre com os valores: \n");
    for(g=1;g<=8;g++)
    {
        scanf("%d", &a[g]);
        b[g]=a[g]*5;
    }
    for(g=1;g<=7;g++)
    for(h=g+1;h<=8;h++)
    {
        if(b[g]>b[h])
    {
        i=b[g];
        b[g]=b[h];
        b[h]=i;
    }  
    }
    for(g=1;g<=8;g++)
    {
        printf("a matriz de b eh: %d\n", b[g]);
    }
    g=0;    
    acha=0;
    printf("digite um numero que ira ser pesquisado: ");
    scanf("%d", &jacare);
    while(g<8 && acha==0)
    {
        if(jacare==b[g])
        acha=1;
        else
        g++;
    }
    if(acha==1)
    printf("o numero foi encontrado na posicao: %d", g);
    else
    printf("sem tempo irmao");
    getch();
    return 0;
}
