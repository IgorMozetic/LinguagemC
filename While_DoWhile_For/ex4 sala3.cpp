#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf(" entre com um valor: ");
    scanf("%d", &n);
    if (n<=50)
	{
		  while (n<250)
    { 
        printf("%d\n", n);
        n=n*3;
    }
	}
	else
	printf("fodase");
  
    getch ();
    return 0;
}
