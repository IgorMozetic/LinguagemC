#include<stdio.h>
#include<conio.h>
int algotimo();
int algoritimo(float *valor, float *taxa, float *tempo) 
{
    float prest;
    prest=*valor+(*valor*(*taxa/100)**tempo);
    printf("o valor da prestacao eh: %.2f", prest);
    getch();
}
int main()
{
    float valor, taxa, tempo, *vl, *tx, *tm;
    printf("entre com o valor: ");
    scanf("%f", &valor);
    printf("entre com o taxa: ");
    scanf("%f", &taxa);
    printf("entre com o tempo: ");
    scanf("%f", &tempo);
    vl=&valor;
    tx=&taxa;
    tm=&tempo;
    algoritimo(vl, tx, tm);
    getch();
    return 0;
}
