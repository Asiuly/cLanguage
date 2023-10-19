/******************************************************************************

Autor: Luisa Tavares dos Santos
Data de Criação: 05/07/23.
RA: 820990
Objetivo: determine e mostre se uma turma de alunos possui algum 
aluno com certa idade.
        
*******************************************************************************/

//Bibliotecas
#include <stdio.h>

//Constantes
#define MAX_ALUNOS 100

//Funções
int main()
{
    
    //Declarações locais 
    int NumeroAlunos, IdadeBusca;
    int i=0; //Variável auxiliar para a contagem das idade
    short int achou=0;
    
    //Leitura de dados
    printf("Digite um número de até %d alunos: ",MAX_ALUNOS);
    scanf("%d",&NumeroAlunos);
    
    //Vetor para as informações dos alunos
    int IdadeAlunos[NumeroAlunos];
    
    //Verificar se existem alunos e se não passou do máximo definido
    if (NumeroAlunos == 0 || NumeroAlunos > MAX_ALUNOS)
        {
            printf("Número de alunos inválido! Reinicie o programa");
            return 0;
        }

    //Laço de repetição para entrada de dados
    do
    {
        printf("Digite a idade do aluno: ");
        scanf("%d", &IdadeAlunos[i]);
        
        i++;
    }
    while(i < NumeroAlunos);
    
    //Adquirir idade deseja e busca-la no vetor
    printf("Digite a idade que quer procurar: ");
    scanf("%d",&IdadeBusca);
    
    //Verificar se idade existe no vetor
    for (i = 0; i < NumeroAlunos; i++) {
        if (IdadeAlunos[i] == IdadeBusca) 
        {
            achou = 1;
            break;
        }   
    }

    //Exibindo resultados
    if (achou==1)
        printf("Existe");
    else
        printf("Não existe");
    
    //Finalização
    return 0;
}
