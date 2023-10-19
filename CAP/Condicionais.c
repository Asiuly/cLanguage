/**************************************************************

Autor: Luísa Tavares dos Santos
RA: 820990
Data de Criação: 04/07/23.
Objetivo: Ler 7 numeros inteiros, calcular o maior valor
entre eles e exibi-lo

**************************************************************/
//Bibliotecas
#include <stdio.h>

//Funções
int main()
{
    //Declaração de variaveis
    int n1, n2, n3, n4, n5, n6, n7;
    
    //Inicialização de variaveis
    int maiorValor = 0;
    
    //Entrada de dados
    printf("Insira o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Insira o segundo número: ");
    scanf("%d", &n2);
    
    printf("Insira o terceiro número: ");
    scanf("%d", &n3);
    
    printf("Insira o quarto número: ");
    scanf("%d", &n4);
    
    printf("Insira o quinto número: ");
    scanf("%d", &n5);
    
    printf("Insira o sexto número: ");
    scanf("%d", &n6);
    
    printf("Insira o sétimo número: ");
    scanf("%d", &n7);
    
    //Cálculo de maior valor
    maiorValor = n1;
    
    if (n2 > n1)
        maiorValor = n2;
        
    if (n3 > maiorValor)
        maiorValor = n3;
        
    if (n4 > maiorValor)
        maiorValor = n4;
    
    if (n5 > maiorValor)
        maiorValor = n5;
        
    if (n6 > maiorValor)
        maiorValor = n6;
        
    if (n7 > maiorValor)
        maiorValor = n7;
    
    //Exibição de variaveis
    printf("\no maior valor é %d", maiorValor);
    
    //Finalização do Código
    return 0;
    
}//end of main

