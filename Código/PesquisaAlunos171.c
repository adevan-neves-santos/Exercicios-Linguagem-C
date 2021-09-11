/*
 171. Para uma pesquisa relativa os h�bitos de estudo dos alunos dos cursos de engenharia da
 Universidade do Estado do Amazonas, foi idealizado um sistema baseado numa estrutura TDados, com
 campos char Nome[40] ; char Sexo; int NumHoras ; onde Nome e Sexo t�m finalidades obvias (Sexo recebe M ou F )
 e NumHoras recebe o n�imero de horas di�rias de estudo do pesquisado
 a) Escreva uma fun��o que armazene os dados coletados (quantidade de alunos pesquisados, n�o conhecido a priori)
 num vetor de estrutura
 b) Escreva uma fun��o que retorne os nomes dos alunos que dedicam mais horas di�rias de estudo
*/
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 /* irei definir a minha estrutura TDados */

 typedef struct aluno{
    char Nome[40];
    char Sexo;
    int NumHoras;
 }Aluno;

/* aloca mem�ria dinamicamente a mem�ria e realiza a grava��o dos dados*/
void armazenaDados(int n,Aluno** turmas)
{
    int i;
    turmas=(Aluno**)malloc(n*(sizeof(Aluno*)));
    printf("---Turmas---");
    for(i=0;i<n;i++){
        turmas[i]=(Aluno*)malloc(sizeof(Aluno));

        printf("Aluno[%d]:\n",i);
        scanf(" %39[^\n]",&(turmas[i]->Nome));

        printf("Sexo:\n");
        scanf("%c",&(turmas[i]->Sexo));

        printf("Horas de estudo: ");
        scanf("%d",&(turmas[i]->NumHoras));
    }
}

int main(void){
    Aluno** turmas;

    int n;
    printf("Quantidade de alunos:");
    scanf("%d",&n);

    armazenaDados(n,turmas);
    printf("NumHoras: %d",turmas[0]->NumHoras);
    return 0;
}
