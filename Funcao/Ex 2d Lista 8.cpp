#include<stdio.h>
#include<conio.h>
#include<math.h>
int potencia();
int potencia(float valor, float expoente)
{
    float resultado;
    resultado=pow(valor, expoente);
    printf("o resultado eh: %.2f", resultado);
    getch();
}
int main()
{
    float valor, expoente;
    printf("entre com o valor: ");
    scanf("%f", &valor);
    printf("entre com o expoente: ");
    scanf("%f", &expoente);
    potencia(valor, expoente);
    getch();
    return 0;
}
