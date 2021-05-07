#include<stdio.h>
#include<conio.h>

int main()
{
	int a[40], i, g, h, acha;
	printf("entre com o elemento a: ");
	for(g=1;g<=40;g++)
	{
		scanf("%d", &a[g]);
    }
    for(g=1;g<=39;g++)
    for(h=g+1;h<=40;h++)
    {
        if(a[g]>a[h])
    {
        i=a[g];
        a[g]=a[h];
        a[h]=i;
    }  
    }
   for(g=1;g<=40;g++)
    {
        printf("a matriz de a eh: %d\n", a[g]);
    }
    g=0;    
    acha=0;
    printf("digite um numero que ira ser pesquisado: ");
    scanf("%d", &i);
    while(g<40 && acha==0)
    {
        if(i==a[g])
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
