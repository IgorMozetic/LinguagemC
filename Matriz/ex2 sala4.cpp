#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i, g, h;
	//
	for(i=0;i<6;i++)
	{
		printf("entre com o elemento: ");
		scanf("%d", &a[i]);
	}
	//
		for(i=0;i<6;i++)
		{
			g=a[i];
			for(h=g-1;h>0;h--){
				if (a[i]==1)
				b[i]=1;
			else{
				g=g*h;	
			}
			b[i]=g;
			}
		}
		//
		for(i=0;i<6;i++)
		{
			printf(" o resultado eh: %d\n", b[i]);
		}
		//
	getch ();
	return 0;
}

