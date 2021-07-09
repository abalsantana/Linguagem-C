#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define QUESTOES 50
#define ALUNOS 20
#define INS ALUDIS

typedef struct
{
    char textoQuestao[50];
    int codigoQuestao;
    char resp1Questao[2];

    char resp2Questao[2];

    char resp3Questao[2];

    char resp4Questao[2];

    char resp5Questao[2];
    char situacaoResp5[2];
} TQuestoes;

//criado por Antonio
typedef struct
{
    char nome[20];
    int mat;
    TQuestoes respostas;
} TAluno;

//função que solicita o número de questão ao usuário | criado por Antonio
int qtdeQuestao()
{
    /*Para  isso,  o  usuário  deve escolher  o  número  de  questões 
    da  avaliação, devendo este ser no mínimo 5 (cinco) e no máximo 
    10 (dez);*/
    int numQuest;
    do
    {
        printf("Informe o numero de questoes: \n");
        scanf("%d"), &numQuest;

    } while (numQuest < 5 && numQuest > 10);
    return numQuest;
}

void incluirQuestoes()
{
    TQuestoes bancoQuestoes[QUESTOES] = {
        {"0+1+0", 1001, "1", "2", "3", "4", "5", "A"},
        {"48/24", 1002, "1", "2", "3", "4", "5", "B"},
        {"45/15", 1003, "1", "2", "3", "4", "5", "C"},
        {"44/11", 1004, "1", "2", "3", "4", "5", "D"},
        {"5+0+0", 1005, "1", "2", "3", "4", "5", "E"},
        {"1*1+0", 1006, "1", "2", "3", "4", "5", "A"},
        {"2*1+0", 1007, "1", "2", "3", "4", "5", "B"},
        {"3*1+0", 1008, "1", "2", "3", "4", "5", "C"},
        {"4*1+0", 1009, "1", "2", "3", "4", "5", "D"},
        {"5*1+0", 1010, "1", "2", "3", "4", "5", "E"},
        {"1-0+0", 1011, "1", "2", "3", "4", "5", "A"},
        {"2-0+0", 1012, "1", "2", "3", "4", "5", "B"},
        {"3-0+0", 1013, "1", "2", "3", "4", "5", "C"},
        {"4-0+0", 1014, "1", "2", "3", "4", "5", "D"},
        {"5-0+0", 1015, "1", "2", "3", "4", "5", "E"},
        {"1+0+0", 1016, "1", "2", "3", "4", "5", "A"},
        {"2+0+0", 1017, "1", "2", "3", "4", "5", "B"},
        {"3+0+0", 1018, "1", "2", "3", "4", "5", "C"},
        {"4+0+0", 1019, "1", "2", "3", "4", "5", "D"},
        {"5+0+0", 1020, "1", "2", "3", "4", "5", "E"},
        {"0+1+0", 1021, "1", "2", "3", "4", "5", "A"},
        {"0+2+0", 1022, "1", "2", "3", "4", "5", "B"},
        {"0+3+0", 1023, "1", "2", "3", "4", "5", "C"},
        {"0+4+0", 1024, "1", "2", "3", "4", "5", "D"},
        {"0+5+0", 1025, "1", "2", "3", "4", "5", "E"},
        {"10/10", 1026, "1", "2", "3", "4", "5", "A"},
        {"10/5", 1027, "1", "2", "3", "4", "5", "B"},
        {"99/33", 1028, "1", "2", "3", "4", "5", "C"},
        {"40/10", 1029, "1", "2", "3", "4", "5", "D"},
        {"10/2", 1030, "1", "2", "3", "4", "5", "E"},
        {"50-49", 1031, "1", "2", "3", "4", "5", "A"},
        {"54-52", 1032, "1", "2", "3", "4", "5", "B"},
        {"50-47", 1033, "1", "2", "3", "4", "5", "C"},
        {"50-46", 1034, "1", "2", "3", "4", "5", "D"},
        {"50-45", 1035, "1", "2", "3", "4", "5", "E"},
        {"1-1+1", 1036, "1", "2", "3", "4", "5", "A"},
        {"2-1+1", 1037, "1", "2", "3", "4", "5", "B"},
        {"3-1+1", 1038, "1", "2", "3", "4", "5", "C"},
        {"4-1+1", 1039, "1", "2", "3", "4", "5", "D"},
        {"5-1+1", 1040, "1", "2", "3", "4", "5", "E"},
        {"37-36", 1041, "1", "2", "3", "4", "5", "A"},
        {"37-35", 1042, "1", "2", "3", "4", "5", "B"},
        {"37-34", 1043, "1", "2", "3", "4", "5", "C"},
        {"37-33", 1044, "1", "2", "3", "4", "5", "D"},
        {"37-32", 1045, "1", "2", "3", "4", "5", "E"},
        {"41-40", 1046, "1", "2", "3", "4", "5", "A"},
        {"42-40", 1047, "1", "2", "3", "4", "5", "B"},
        {"43-40", 1048, "1", "2", "3", "4", "5", "C"},
        {"44-40", 1049, "1", "2", "3", "4", "5", "D"},
        {"45-40", 1050, "1", "2", "3", "4", "5", "E"}};
    int aux[20];

    FILE *arqQuestoes;
    FILE *arqQuestoesB;
    int i, teste = 1;
    char resposta[1];
    arqQuestoes = fopen("banco.txt", "r");
    arqQuestoesB = fopen("banco2.bin", "wb");

    fwrite(&bancoQuestoes, sizeof(TQuestoes), QUESTOES, arqQuestoesB);

    fclose(arqQuestoes);
    fclose(arqQuestoesB);

    int q = 0, numQuest;

    //Chamada da função de validação para atender
    /*Uma vez criado o banco de questões, é o momento de  gerar  uma  prova.  
    Para  isso,  o  usuário  deve escolher  o  número  de  questões  da  
    avaliação, devendo este ser no mínimo 5 (cinco) e no máximo 10 (dez); Ver função qtdeQuestao()*/
    numQuest = qtdeQuestao();
    
    for (i = 0; i < numQuest; i++)
    {
        q = rand() % QUESTOES;

        printf("\n(%i) ", bancoQuestoes[q].codigoQuestao);
        printf("O resultado de %s eh:", bancoQuestoes[q].textoQuestao);
        printf("\n		(A) %s\n", bancoQuestoes[q].resp1Questao);

        printf("		(B) %s\n", bancoQuestoes[q].resp2Questao);

        printf("		(C) %s\n", bancoQuestoes[q].resp3Questao);

        printf("		(D) %s\n", bancoQuestoes[q].resp4Questao);

        printf("		(E) %s\n", bancoQuestoes[q].resp5Questao);

        printf("Resposta........:");

        gets(resposta);

        if ((strcasecmp(resposta, bancoQuestoes[q].situacaoResp5)))

        {
            printf("CERTO!!!");
        }

        else

            printf("errado!!!");
    }
}

void aplicarProva()
{
    int i, tamTurma;

    printf("\nInforme o tamanho da turma: \n");
    scanf("%d", &tamTurma);
    TAluno aluno[tamTurma];
    if (tamTurma < ALUNOS)
    {
        for (i = 0; i < tamTurma; i++)
        {
            fflush(stdin);
            printf("Informe o nome do aluno: \n");
            gets(aluno[i].nome);
            printf("Informe a matricula do aluno: \n");
            scanf("%d", &aluno[i].mat);
        }
    }
}

int main(void)
{
    incluirQuestoes();
    aplicarProva();
    return 0;
}