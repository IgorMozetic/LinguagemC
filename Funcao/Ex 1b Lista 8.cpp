#include<stdio.h>
#include<conio.h>
#include<string.h>
int i, j;
struct cad
    {
        char nome[60];
        float n1, n2, media;
    };
    struct cad X[20], aux;
    int cadastro()
    {
        printf("faca seu cadastro \n");
            for(i=0;i<=19;i++)
            {
            	fflush(stdin);
           	 	printf("nome: ");
            	fgets(X[i].nome,60,stdin);
            	printf("nota 1: ");
            	fflush(stdin);
            	scanf("%f", &X[i].n1);
            	printf("nota 2: ");
            	fflush(stdin);
            	scanf("%f", &X[i].n2);
            	printf("\nnome: %s", X[i].nome);
            	printf("nota 1: %.2f\n", X[i].n1);
            	printf("nota 2: %.2f\n", X[i].n2);
            	X[i].media=(X[i].n1+X[i].n2)/2;
    			printf("media: %.2f\n\n", X[i].media);
       		}
		getch();    
    }
    int ordenacao()
    {
    	for(i=0;i<=19;i++)
        for(j=1+i;j<=20;j++)
        if(strcmp(X[i].nome, X[j].nome)>0);
        {
            aux=X[i];
            X[i]=X[j];
            X[j]=aux;        
        }
        for(i=0;i<=19;i++)
        printf("nome: %s media: %.2f\n", X[i].nome, X[i].media);
        getch();
	}
	int alteracao()
    {
        char nm[60];
        printf("entre com a nome do registro a ser corrigido: \n");
        fflush(stdin);
        fgets(nm,60,stdin);
        i=0;
        while(i<=19)
        {
            if(nm==X[i].nome)
            break; 
            else
            i++;
        }
        fflush(stdin);
        printf("nome: ");
        fgets(X[i].nome,60,stdin);
        printf("nota 1: ");
        fflush(stdin);
       	scanf("%f", &X[i].n1);
        printf("nota 2: ");
        fflush(stdin);
        scanf("%f", &X[i].n2);
    	printf("\nnome: %s", X[i].nome);
        printf("nota 1: %.2f\n", X[i].n1);
        printf("nota 2: %.2f\n", X[i].n2);
        X[i].media=(X[i].n1+X[i].n2)/2;
    	printf("media: %.2f\n\n", X[i].media);
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
        while(i<=19)
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
    int listar_aprovados()
    {
    	printf("APROVADOS!");
		for(i=0;i<=19;i++)
    	{
    		if(X[i].media>=7)
    		{
				printf("\nnome: %s", X[i].nome);
        		printf("media: %.2f\n", X[i].media);
    		}
		}
	}
	int listar_reprovados()
    {
    	printf("REPROVADOS!");
		for(i=0;i<=19;i++)
    	{
    		if(X[i].media<7)
    		{
				printf("\nnome: %s", X[i].nome);
        		printf("media: %.2f\n", X[i].media);
    		}
		}
	}
	int main()
        {
            int menu=0;
            while (menu!=7)
            {
                printf("entre com o um numero para realizar a tarefa\n 1- cadastro de registros.\n 2- classificacao alfabetica.\n 3-alteracao de registro.\n 4- pesquisa de registros.\n 5-listar alunos aprovados.\n 6-listar alunos reprovados.\n 7-sair.\n");
                scanf("%d", &menu);
                switch (menu)
                {
                    case 1: cadastro(); break;
                    case 2: ordenacao(); break;
                    case 3: alteracao(); break;
                    case 4: pesquisa(); break;
                    case 5: listar_aprovados(); break;
                    case 6: listar_reprovados(); break;
					default: printf("Saindo ...");
                }
            }
            getch();
            return 0;
        }
