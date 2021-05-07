#include<stdio.h>
#include<conio.h>
#include<math.h>
int potencia();
int potencia(float *valor, float *expoente)
{
    float resultado;
    resultado=pow(*valor, *expoente);
    printf("o resultado eh: %.2f", resultado);
    getch();
}
int main()
{
    float valor, expoente, *vl, *exp;
    printf("entre com o valor: ");
    scanf("%f", &valor);
    printf("entre com o expoente: ");
    scanf("%f", &expoente);
    vl=&valor;
    exp=&expoente;
    potencia(vl, exp);
    getch();
    return 0;
}
