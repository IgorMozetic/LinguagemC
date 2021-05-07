#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, g, h;
	printf("entre com o elemento A: ");
	for(g=0;g<20;g++)
	{
		scanf("%d", &a[g]);
	}
	for(g=0;g<30;g++)
	{
		printf("entre com o elemento B: ");
		scanf("%d", &b[g]);	
	}
	for (g=1;g<50;g++)
	{
		if (g<20)
		{
			c[g]=a[g];	
		}
		else
		{
			c[g]=b[g-20];
		}
	}
	for(g=1;g<=48;g++)
    for(h=g+1;h<=49;h++)
    {
        if(c[g]<c[h])
    {
        i=c[g];
        c[g]=c[h];
        c[h]=i;
    }  
    }
        for(g=1;g<=50;g++)
    {
    printf("a matriz de c eh: %d\n", c[g]);
    }
	getch ();
	return 0;
}
