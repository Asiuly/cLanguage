/**************************************************************************************
Autor: Luisa Tavares dos Santos
RA: 820990
Data de Criação: 17/07/23

Objetivo:  Manipule um cubo de dados com as dimensões produto, filial e tempo que armazena o total de vendas.
Ou seja, o arranjo multidimensional armazena o total de vendas que acontece em cada combinação de produto, 
filial e tempo (dia no ano). Primeiramente, faça a leitura de todos os dados de entrada por meio de uma varredura 
completa do cubo de dados. Em seguida, faça uma busca e mostre o total de vendas para um determinado produto em
uma determinada filial e um certo tempo. Na busca, o usuário entrará com o nome do produto, o nome da filial e a data 
(dia, mês e ano). Deve-se procurar os índices das dimensões produto, filial e tempo em estruturas auxiliares (arranjos)
para poder acessar o total de vendas no cubo de dados. Os dados das estruturas auxiliares que irão armazenar os dados 
de produto, filial e tempo devem ser inicializados na declaração. Por fim, mostrar todas as vendas do arranjo multidimensional 
por meio de uma varredura completa.
**************************************************************************************/

//inclusão de bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//definições de constantes globais
#define TP 2 //Total de produtos
#define TF 2 //Total de filiais
#define TD 2 //Total de datas (tempo)

//definições para booleano
#define FALSE 0
#define TRUE 1

//programa principal 
int main()
{
    
    //declaracoes locais para armazenar dados de registro
    char filiais[TF][30] = {"norte", "centro"};
    char produtos[TP][30] = {"sabonete", "detergente"};
    char datas[TD][11] = {"18/10/2001", "11/02/2005"};
    
    //arranjo com as dimensões certas
    int vendas[TP][TF][TD];
    
    //contadores para laços
    int i, j, k;    
    
    //Entrada de dados para arranjo das vendas
    for (i = 0; i < TP; i++)
        for (j = 0; j < TF; j++) 
            for (k = 0; k < TD; k++)
            {
                printf ("Quantas vendas do produto %s na filial %s no dia %s foram realizadas: ", produtos[i], filiais[j], datas[k]);
                scanf ("%d", &vendas[i][j][k]);
            }
    
    //Declaração de estruturas auxiliares para busca
    char filial[30];
    char produto[30];
    char data[11];
    short int achou = FALSE;
    
    //Entrada de dados necessários para busca
    printf ("Para realizar uma busca, informe os dados necessários\n");
    printf("\nInforme o Produto: ");
    scanf ("%s", produto);
    
    printf ("\nInforme a Filial:");
    scanf("%s", filial);
    
    printf ("\nInforme a data: ");
    scanf ("%s", data);
    
    //Exibição do total de vendas a partir dos indices buscados
    for(i=0; i < TP; i++){
        if(strcmp(produto, produtos[i])== FALSE){
            for(j=0; j < TF; j++){
                if(strcmp(filial, filiais[j]) == FALSE) {
                    for (k=0; k < TD; k++){
                        if(strcmp(data, datas[k])){
                            printf ("O produto %s da filial %s na data %s teve %d vendas\n\n", produtos[i], filiais[j], datas[k], vendas[i][j][k]);
                            achou = TRUE;
                        }
                    }
                    
                    break;
                }
            }
            
            break;
        }
    }
    
    if(achou == FALSE)
        printf("nao pudemos encontrar os dados inseridos no sistema");
    
    printf("Inicio da exibição total de vendas\n");
    //Exibição com varredura final do arranjo
    for (i = 0; i < TP; i++)
    {
        for (j = 0; j < TF; j++) 
        {
            for (k = 0; k < TD; k++)
            {
                printf ("o produto %s da filial %s na data %s teve %d vendas\n", produtos[i], filiais[j], datas[k], vendas[i][j][k]);
            }
            printf ("\n");
        }
        printf ("\n");
    }
    
    //Finalização do código
    return 0;
    
} //end of main
    
