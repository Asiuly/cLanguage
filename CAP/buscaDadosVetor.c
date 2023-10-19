/********************************************************************************************

Autor: Luisa Tavares dos Santos
Data de Criação: 05/07/23.
RA: 820990

Objetivo: Determinar e mostrar a maior idade dentre as idades de N alunos. 
Calcular e mostrar quantos alunos possuem a idade maior do que a média de idade dos alunos.
Mostrar o RA e o sexo dos alunos que possuem a maior idade.
Mostrar o RA e o sexo dos alunos que possuem a idade maior do que a média de idade dos alunos.
            
*********************************************************************************************/

//Bibliotecas
#include <stdio.h>

//Constantes
#define MAX_ALUNOS 100

//Funções
int main()
{
    //Declarações locais 
    int idades[MAX_ALUNOS];
    int NumeroAlunos;
    int i=0; //Variável auxiliar para a contagem das idades
    int SomaIdades, MediaIdades;
    int MaiorIdade = 0;
    int AlunosMaiorMedia = 0;
    char descarte;
    
    //Leitura de dados
    printf("Digite um número de até %d alunos: ",MAX_ALUNOS);
    scanf("%d",&NumeroAlunos);
    
    //Vetor para as informações dos alunos
    int IdadeAlunos[NumeroAlunos];
    int RA[NumeroAlunos];
    char Sexo[NumeroAlunos];
    int MaioresIdades[NumeroAlunos];
    
    
    //Verificar se existem alunos e se não passou do máximo definido
    if (NumeroAlunos == 0 || NumeroAlunos > MAX_ALUNOS)
        {
            printf("Número de alunos inválido! Reinicie o programa");
            return 0;
        }

    //Laço de repetição para entrada de dados
    do
    {
        printf("\nDigite a idade do aluno: ");
        scanf("%d", &IdadeAlunos[i]);
        
        printf("Digite o RA do aluno: ");
        scanf("%d", &RA[i]);
        
        printf("Digite o sexo do aluno [F / M]: ");
        scanf("%c",&descarte); //Limpar o buffer
        scanf("%c", &Sexo[i]);
        
        SomaIdades += IdadeAlunos[i];
        i++;
    }
    while(i < NumeroAlunos);
    
    //Média das idades
    MediaIdades = SomaIdades/NumeroAlunos;
    
    //Zerando contador para próximo laço
    i=0;
    
    //Definir maior idade
    do
    {
        if(IdadeAlunos[i]>=MaiorIdade)
        {
            MaiorIdade = IdadeAlunos[i];
        }
        i++;
    }
    while(i < NumeroAlunos);
    
    
    //Zerando contador para próximo laço
    i=0;
    
    //Definir quantos alunos tem a idade maior que a media
    do
    {
        if (IdadeAlunos[i]>MediaIdades)
        {
            AlunosMaiorMedia ++;
        }
        
        i++;
    }
    while(i<NumeroAlunos);
    
    //Exibindo resultados
    printf("\nA maior idade dentre os %d é: %d anos\n", NumeroAlunos, MaiorIdade);
    printf("A idade media entre eles foi de: %d\n", MediaIdades);
    printf("A quantidade de alunos que tiveram idade maior que %d foi de: %d", MediaIdades, AlunosMaiorMedia);
    
    //Zerando contador para próximo laço
    i=0;
    
    printf("\nO RA e o sexo dos alunos mais velhos, que tem idade de %d são:", MaiorIdade);
    do
    {
        if(IdadeAlunos[i]>=MaiorIdade)
        {
           printf("\n%d, sexo: %c", RA[i], Sexo[i]);
        }
        i++;
    }
    while(i < NumeroAlunos);
    
    //Zerando contador para próximo laço
    i=0;
    
    printf("\nO RA e o sexo dos alunos mais velhos que a média de %d", MediaIdades);
    do
    {
        if(IdadeAlunos[i]>MediaIdades)
        {
           printf("\n%d, sexo: %c", RA[i], Sexo[i]);
        }
        i++;
    }
    while(i < NumeroAlunos);
    
    
    
    //Finalização do programa
    return 0;
}
