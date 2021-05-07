#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[20], i, g, h, acha;
	printf("entre com o elemento a: ");
	for(g=1;g<=20;g++)
	{
		scanf("%d", &a[g]);
		b[g]=a[g]+2;
	}
    for(g=1;g<=19;g++)
    for(h=g+1;h<=20;h++)
    {
        if(b[g]>b[h])
    {
        i=b[g];
        b[g]=b[h];
        b[h]=i;
    }  
    }
   for(g=1;g<=20;g++)
    {
        printf("a matriz de b eh: %d\n", b[g]);
    }
    g=0;    
    acha=0;
    printf("digite um numero que ira ser pesquisado: ");
    scanf("%d", &i);
    while(g<20 && acha==0)
    {
        if(i==b[g])
        acha=1;
        else
        g++;
    }
    if(acha==1)
    printf("o numero foi encontrado na posicao: %d", g);
    else
    printf("nao foi encontrado");
    getch();
    return 0;
}
