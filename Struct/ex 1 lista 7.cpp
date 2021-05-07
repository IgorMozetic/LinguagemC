#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int sc, acha;
    char nm[60];
    sc=0;
    while(sc!=5)
    {
    printf("entre com o um numero para realizar a tarefa\n 1- cadastro de registros.\n 2- pesquisa de registros.\n 3- classificacao alfabetica.\n 4-alteracao de registro.\n 5-sair\n");
    scanf("%d", &sc);
    struct cad
    {
    char nome[60], end[60], tel[12];
    int idade;
    };
    struct cad X[5], aux;
    int i, j, id;
    switch(sc)
    {
    case 1: 
    {
        printf("faca seu cadastro \n");
        for(i=0;i<=4;i++)
        {
        fflush(stdin);
        printf("nome: ");
        fgets(X[i].nome,60,stdin);
        fflush(stdin);
        printf("endereco: ");
        fgets(X[i].end,60,stdin);
        fflush(stdin);
        printf("idade: ");
        scanf("%d", &X[i].idade);
        fflush(stdin);
        printf("telefone: ");
        fgets(X[i].tel,12,stdin);
        printf("\nnome: %s\n", X[i].nome);
        printf("endereco: %s\n", X[i].end);
        printf("idade: %d\n\n", X[i].idade);
        printf("telefone: %s\n", X[i].tel);
    }
    }
    break;
    case 2: 
    {
        printf("entre com a idade a ser procurado: ");
        scanf("%d", &id);
        i=0;
        while(i<=4)
        {
            if(id==X[i].idade)
            acha=1;
            else
        {
            acha=0;
            i++;
        }
        }
        if( acha==1)
        printf("%d na posicao %d", id, i+1);
        else
        printf("nao encontrado \n");
    }
    break;
    case 3:
    {
        for(i=0;i<=5;i++)
        for(j=1+i;j<=6;j++)
        if(strcmp(X[i].nome, X[j].nome)>0);
        {
            aux=X[i];
            X[i]=X[j];
            X[j]=aux;
        }
        break;
    }
        case 4:
        {
            printf("entre com a nome do registro a ser corrigido: \n");
            fflush(stdin);
            fgets(nm,60,stdin);
            i=0;
            while(i<=4)
            {
                if(nm==X[i].nome)
                break; 
                else
                i++;
            }
            printf("reescreva os dados: ");
            fflush(stdin);
            fgets(X[i].nome,60,stdin);
            fflush(stdin);
            fgets(X[i].end,60,stdin);
            scanf("%d", &X[i].idade);
            fflush(stdin);
            fgets(X[i].tel,12,stdin);
            printf("nome: %s\n", X[i].nome);
            printf("endereco: %s\n", X[i].end);
            printf("idade: %d\n", X[i].idade);
            printf("telefone: %s\n", X[i].tel);
        }
        break; 
    default:printf("saindo");
    }
    }
    getch ();
    return 0;

}
        
            
