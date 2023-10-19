/******************************************************************************

Aluno: Luísa Tavares dos Santos
RA: 820990
Data de Criação: 04/07/23.

Objetivo: Faça um programa que permita que o usuário escolha uma 
das opções de um menu que realiza operações com dados de alunos.
Após a escolha da opção, deve-se mostrar por meio de um comando
de escrita qual é a ação sendo executada.

2) DELETE: remover os dados de um aluno identificado pelo seu RA.
- 3) UPDATE: alterar os dados de um aluno identificado pelo seu RA.
- 4) SEARCH: buscar e mostrar os dados de um aluno identificado pelo seu RA.
- 5) BROWSE

*******************************************************************************/

//Bibliotecas
#include <stdio.h>

//Funções
int main()
{
    //declaração de variáveis locais
    int opcao, RA;
    
    //Entrada de dados
    printf("Insira seu RA\n>");
    scanf("%d", &RA);
    
    printf("\nEscolha uma operação de dados através de um número\n");
    printf("1 para INSERT\n");
    printf("2 para DELETE\n");
    printf("3 para UPDATE\n");
    printf("4 para SEARCH\n");
    printf("5 para BROWSE\n\n>");
    scanf("%d", &opcao);
    
    //Cálculo de opção e atribuição de resultado final
    switch (opcao)
    {
        case 1:
        printf("\nINSERT: Inserindo dados do aluno de RA %d no banco de dados", RA);
        break;
        
        case 2:
        printf("\nDELETE: Deletando dados do aluno de RA %d no banco de dados", RA);
        break;
        
        case 3:
        printf("\nUPDATE: Alterando dados do aluno de RA %d no banco de dados", RA);
        break;
        
        case 4:
        printf("\nSEARCH: Buscando e exibindo dados do aluno de RA %d no banco de dados", RA);
        break;
        
        case 5:
        printf("\nBROWSE: Buscando e exibindo dados de todos os alunos do banco de dados");
        break;
        
        default:
        printf("\nOpção inválida, reinicie o programa");
        break;
    }

    //finalização do programa
    return 0;
    
}//end of main

