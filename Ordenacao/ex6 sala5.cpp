#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[30], b[30], i, h, acha;
    for(i=0;i<30;i++)
	{
        printf("entre com o elemento: ");
		scanf("%d", &a[i]);
		b[i]= pow(a[i],3);
		printf("o resultado eh: %d\n", b[i]);
	}
	i=0;    
    acha=0;
    printf("digite um numero que ira ser pesquisado: ");
    scanf("%d", &h);
    while(i<30 && acha==0)
    {
        if(h==b[i])
        acha=1;
        else
        i++;
    }
    if(acha==1)
    printf("o numero foi encontrado na posicao: %d", i);
    else
    printf("nao foi encontrado");
    getch();
    return 0;
}
