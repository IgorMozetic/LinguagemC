#include<stdio.h>
#include<conio.h>

int main ()
{
    int n1, n2, n3, n4;
    printf("entre com o primeiro numero: ");
    scanf("%i", &n1);
    printf("entre com o segundo numero: ");
    scanf("%i", &n2);
    printf("entre com o terceiro numero: ");
    scanf("%i", &n3);
    printf("entre com o quarto numero: ");
    scanf("%i", &n4);
    if ((n1 % 4==0) || (n1 % 5==0))
    printf("\nnumero divisivel por 4 ou 5: %i\n", n1);
    if ((n2 % 4==0) || (n2 % 5==0))
    printf("numero divisivel por 4 ou 5: %i\n", n2);
    if ((n3 % 4==0) || (n3 % 5==0))
    printf("numero divisivel por 4 ou 5: %i\n", n3);
    if ((n4 % 4==0) || (n4 % 5==0))
    printf("numero divisivel por 4 ou 5: %i", n4);
    else
    printf("nao foi digitado nenhum numero divisivel por 2 e 3");
    
    getch ();
    return 0;
}
