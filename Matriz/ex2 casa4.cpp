#include<stdio.h>
#include<conio.h>
int main()
{
	int RAC[9], RAV[9], i;
	for(i=0;i<9;i++)
	{
		printf("entre com os valores do RA inicial: ");
		scanf("%d", &RAV[i]);
	}
		RAC[0] = RAV[0];
		RAC[1] = RAV[1];
		RAC[2] = RAV[2];
		RAC[3] = RAV[3];
		RAC[4] = RAV[4];
		RAC[5] = RAV[8];
		RAC[6] = RAV[7];
		RAC[7] = RAV[6];
		RAC[8] = RAV[5];
	for(i=0;i<9;i++)
	{
		printf("o valor do RA novo eh: %d\n", RAC[i]);
	}
	getch();
	return 0;
}
