#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], b[10], i, y;
	for(y=0;y<10;y++){
		printf("entre com o elemento de a: ");
		scanf("%d", &a[y]);
		i = 9 - y;
		b[i] = a[y];
	}
	for(i=0;i<10;i++){
	
	
		
		printf(" elemento de b: %d", b[i]);
	}
	

	getch();
	return 0;
}
