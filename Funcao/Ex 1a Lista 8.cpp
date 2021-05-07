#include<stdio.h>
#include<conio.h>
#include<string.h>
int i, j;
struct cad
    {
        char nome[60], end[60], tel[12];
        int idade;
    };
    struct cad X[5], aux;
    int cadastro()
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
            fflush(stdin);
            printf("\nnome: %s\n", X[i].nome);
            printf("endereco: %s\n", X[i].end);
            printf("idade: %d\n\n", X[i].idade);
            printf("telefone: %s\n", X[i].tel);  
        }
        getch();    
    }
    int pesquisa()
    {
        char nm[60];
        int acha=0;
        printf("entre com o nome a ser procurado: ");
        fflush(stdin);
        fgets(nm,60,stdin);
        i=0;
        while(i<=4)
        {
            if(strcmp(nm, X[i].nome)==0)
            {
                acha=1; 
                break;
            }
            else
            {
                acha=0;
                i++;
            }
        }
        if(acha==1)
        printf("%s na posicao %d\n", nm, i+1);
        else
        printf("nao encontrado \n");
        getch();
    }
    int ordenacao()
    {
        for(i=0;i<=4;i++)
        for(j=1+i;j<=5;j++)
        if(strcmp(X[i].nome, X[j].nome)>0);
        {
            aux=X[i];
            X[i]=X[j];
            X[j]=aux;        
        }
        for(i=0;i<=4;i++)
        printf("%s\n", X[i].nome);
        getch();
    }
    int alteracao()
    {
        char nm[60];
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
        fflush(stdin);
        printf("\nnome: %s\n", X[i].nome);
        printf("endereco: %s\n", X[i].end);
        printf("idade: %d\n\n", X[i].idade);
        printf("telefone: %s\n", X[i].tel);
        }
        int remocao()
        {
            char nm[60];
            printf("entre com o nome a ser removido: \n");
            fflush(stdin);
            fgets(nm,60,stdin);
            i=0;
            while(i<=4)
            {
                if(strcmp(nm, X[i].nome)==0)
                break; 
                else
                i++;
            }
            printf("pressione enter (0 para a idade) para remover os dados:\n ");
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
            printf("dados removidos com sucesso");
            getch();       
        }
        int main()
        {
            int menu=0;
            while (menu!=6)
            {
                printf("entre com o um numero para realizar a tarefa\n 1- cadastro de registros.\n 2- pesquisa de registros.\n 3- classificacao alfabetica.\n 4-alteracao de registro.\n 5-remocao de registros.\n 6-sair\n");
                scanf("%d", &menu);
                switch (menu)
                {
                    case 1: cadastro(); break;
                    case 2: pesquisa(); break;
                    case 3: ordenacao(); break;
                    case 4: alteracao(); break;
                    case 5: remocao(); break;
                    default: printf("Saindo ...");
                }
            }
            getch();
            return 0;
        }
