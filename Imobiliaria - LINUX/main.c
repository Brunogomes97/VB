#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#include <ctype.h>
#include "cadastro.h"
#include "verificacao.h"
#include "delete.h"



Timovel imo[MAX];

int main(){
    int caso;
    int j=0, k=0;
    char imovel[10];


    do{
        printf("*************************************************\n");
        printf("*******************BEM VINDO!********************\n");
        printf("*************************************************\n");
        printf("1-Cadastrar imoveis\n\n");
        printf("2-Verificar todos os imoveis disponiveis\n\n");
        printf("3-Consulte todos os atributos de um imovel\n\n");
        printf("4-Verificar os imoveis disponiveis para venda\n\n");
        printf("5-Verificar os imoveis disponiveis para alugar\n\n");
        printf("6-Verificar os imoveis para alugar por bairro\n\n");
        printf("7-Verificar os imoveis para vender por bairro\n\n");
        printf("8-Verificar os imoveis disponiveis por cidade\n\n");
        printf("9-Deletar imovel da lista\n\n");
        printf("10-Sair do Programa\n\n");
        printf("*************************************************\n");
        printf("Insira a opcao desejada:\n");
        scanf("%d",&caso);


        switch (caso){

        case 1:
            printf("O que deseja cadastrar?(Casa,apartamento,terreno,flat,studio):\n");
            scanf(" %[^\n]s",imovel);
            strupr(imovel);
            system("clear");
            Fcadastro(imo,j,imovel);
            j++;

            break;

        case 2:
            system("clear");
            verificarQuantidade(imo);
            break;

        case 3:
            system("clear");
            while(k<MAX)
            {
                exibir(imo[k]);
                k++;
            }
            k=0;

            printf("Digite alguma tecla para continuar...\n");
            setbuf(stdin,NULL);
            getchar();
            system("clear");
            break;

        case 4:
            system("clear");
            verificarVenda(imo);
            break;

        case 5:
            verificarAlugar(imo);
            system("clear");
            break;
        case 6:
            system("clear");
            verificarAlugarBairro(imo);

            break;
        case 7:
            system("clear");
            verificarVendaBairro(imo);

            break;
        case 8:
            system("clear");
            verificarCidade(imo);
            break;
        case 9:
            system("clear");
            deletarImovel(imo);
            system("clear");
            break;

        case 10:
            break;

        default:
            printf("Insira uma entrada valida!\n");
            printf("Digite alguma tecla para continuar...\n");
            setbuf(stdin,NULL);
            getchar();
            system("clear");
            break;
        }

    }while(caso!=10);

        return 0;
    }
