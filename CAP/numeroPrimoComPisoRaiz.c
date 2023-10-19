/**********************************************************************

Autor: Luísa Tavares dos Santos
Data de Criação: 04/07/23
RA: 820990
Objectivo: Dizer se o numero inserido pelo usuário é primo e exibir 
verdadeiro ou falso (utilizando piso raiz de N)
    
***********************************************************************/

//Bibliotecas
#include <stdio.h>
#include <math.h>

//Funções
int main()
{
    // Inicializações de variaveis
    int num = 0;
    int ePrimo = 1;
    
    //Entrada de dados
    printf("Digite um numero para descobrir se ele é primo.\n>");
    scanf("%d", &num);
    
    //Cáclculo se é primo ou não
    for(int i = 2; i < sqrt(n); i++) 
    {
        if(num % i == 0) 
        {
            ePrimo = 0;
        }
    }
    
    //Exibição do resultado
    if(ePrimo == 1) 
    {
        printf("O numero é primo!");
    } 
    else 
    {
        printf("O numero não é primo!");
    }
    
    //Finalização do programa
    return 0;
    
}//end of main
