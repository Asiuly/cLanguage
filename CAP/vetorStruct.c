#include <stdio.h>

int main(){

    double mediaParticular, mediaTotal;
    int posicaoMaior, posicaoMenor;
    double somaTotal = 0;
    double maiorMedia = 0;
    double menorMedia = 10;
    
    typedef struct{
        char nome[50];
        int RA;
        double n1;
        double n2;
        double mediaParticular;
    } cadastro;
    
    cadastro alunos[3];
    
    for(int i = 0; i<3; i++){
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].RA);
        scanf("%lf", &alunos[i].n1);
        scanf("%lf", &alunos[i].n2);
        
        alunos[i].mediaParticular = (alunos[i].n1 + alunos[i].n2) / 2;
        somaTotal += alunos[i].mediaParticular;
        
        printf("Media do aluno: %s = %.1lf\n\n", alunos[i].nome, alunos[i].mediaParticular);
        
    }
    
    mediaTotal = somaTotal/3;
    
    for(int i = 0; i<3; i++){
        if(alunos[i].mediaParticular >= maiorMedia){
            maiorMedia = alunos[i].mediaParticular;
            posicaoMaior = i;
        }
        
        if(alunos[i].mediaParticular <= menorMedia){
            menorMedia = alunos[i].mediaParticular;
            posicaoMenor = i;
        }
        
    }
    
    printf("Dados do aluno com Maior Media\n");
    printf("Media: %.1lf\n", maiorMedia);
    printf("Nome: %s\n", alunos[posicaoMaior].nome);
    printf("RA: %d\n", alunos[posicaoMaior].RA);
    
    printf("Dados do aluno com Menor Media\n");
    printf("Media: %.1lf\n", menorMedia);
    printf("Nome: %s\n", alunos[posicaoMenor].nome);
    printf("RA: %d\n", alunos[posicaoMenor].RA);
    
    printf("Dados dos alunos que superaram a media da sala de: %.1lf\n", mediaTotal);
    for(int i = 0; i<3; i++){
        if(alunos[i].mediaParticular > mediaTotal){
            printf("Media: %.1lf\n", alunos[i].mediaParticular);
            printf("Nome: %s\n", alunos[i].nome);
            printf("RA: %d\n", alunos[i].RA);
        }
    }

    return 0;
}
