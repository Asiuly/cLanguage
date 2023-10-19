/********************************************************************************************

Autor: Luisa Tavares dos Santos
Data de Criação: 19/07/23.
RA: 820990

Objetivo: Determinar e mostrar a maior idade dentre as idades de N alunos. 
Calcular e mostrar quantos alunos possuem a idade maior do que a média de idade dos alunos.
Mostrar o RA e o sexo dos alunos que possuem a maior idade.
Mostrar o RA e o sexo dos alunos que possuem a idade maior do que a média de idade dos alunos.
REALIZAR UTILIZANDO STRUCT E ARRANJOS
            
*********************************************************************************************/

//Bibliotecas
#include <stdio.h>

//Constantes
#define MAX_ALUNOS 5

//Declarações globais
typedef struct {
    char nome[30];
    int idade;
    int RA;
    char sexo;
} tCadAluno;

//Funções
int main()
{
    //Declarações locais 
    tCadAluno alunos[MAX_ALUNOS];
    int somaIdades = 0;
    double mediaIdades;
    int qtdMaiorQueMedia;
    int posicoesMaiorIdade[5];
    int posicoesMaiorQueMedia[5];
    int maiorIdade = 0;
    
    //Entrada dados dos alunos
    for(int i = 0; i<MAX_ALUNOS; i++){
       printf("Digite o primeiro nome do aluno %d: ", i);
       scanf("%s", alunos[i].nome);
       
       printf("Digite a idade do aluno %d: ", i);
       scanf("%d", &alunos[i].idade);
       
       printf("Digite o RA do aluno %d: " , i);
       scanf("%d", &alunos[i].RA);
       
       printf("Digite o sexo do aluno %d [F/M]: ", i);
       scanf(" %c", &alunos[i].sexo);
       
       somaIdades += alunos[i].idade;
    }
    
    //calculo da media das idades
    mediaIdades = somaIdades/5;
    
    //Calculo de alunos mais velhos e com idades maiores que a media da sala
    for(int i = 0; i<MAX_ALUNOS; i++){
       if(alunos[i].idade>mediaIdades){
           qtdMaiorQueMedia++;
           posicoesMaiorQueMedia[i] = i;
       }
       
       if(alunos[i].idade > maiorIdade){
            maiorIdade = alunos[i].idade;
            posicoesMaiorIdade[i] = i;
       }
    }
    
    //Saída de dados: alunos com idade maior que a média
    printf("Os alunos maiores que a média de %.2lf anos são:\n", mediaIdades);
    for(int i = 0; i<MAX_ALUNOS; i++){
       if(alunos[i].idade>mediaIdades){
           printf("Nome: %s\n", alunos[posicoesMaiorQueMedia[i]].nome);
           printf("RA: %d\n", alunos[posicoesMaiorQueMedia[i]].RA);
           printf("Sexo: %c\n", alunos[posicoesMaiorQueMedia[i]].sexo) ;
           printf("Idade: %d\n", alunos[posicoesMaiorQueMedia[i]].idade);
        }
    }
    
    //Saida de dados: alunos com maior idade da sala
    printf("Os alunos que tem a maior idade, com %d anos são:\n", maiorIdade);
    for(int i = 0; i<MAX_ALUNOS; i++){
       if(alunos[i].idade==maiorIdade){
           printf("Nome: %s\n", alunos[posicoesMaiorIdade[i]].nome);
           printf("RA: %d\n", alunos[posicoesMaiorIdade[i]].RA);
           printf("Sexo: %c\n", alunos[posicoesMaiorIdade[i]].sexo) ;
           printf("Idade: %d\n", alunos[posicoesMaiorIdade[i]].idade);
        }
    }
    
    //Finalização do programa
    return 0;
    
} //end of main

