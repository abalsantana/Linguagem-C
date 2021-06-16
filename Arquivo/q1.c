/*
Questão 01:Desenvolver uma função que, dado um arquivo texto, 
verifique o   número   de   caracteres   no mesmo.
*/
#include <stdio.h>
#include <string.h>

int criaArquivo(char nome[], char texto[])
{
    FILE *arquivo;
    int i, n;

    //abrindo o arquivo para escrita
    arquivo = fopen(nome, "w+");

    //testando se houve sucesso na abertura do arquivo
    if (arquivo == NULL)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < strlen(texto); i++)
        {
            fputc(texto, arquivo);
        }
        /*  n = verificaNumChar(texto); */

        fclose(arquivo);
        return 1;
    }
}

//char *fgets (char *str, int tamanho,FILE *fp); para ler uam string em um arquivo

//função que verifica a qtde de caracteres
int verificaNumChar(char nome[])
{
    return strlen(nome);
}


int main()
{
    char nomeArquivo[30];
    char texto[120];
    int ret, n;

    fflush(stdin);
    printf("Entre com o nome do arquivo: \n");
    gets(nomeArquivo);

    fflush(stdin);
    printf("Entre com o texto que deseja digitar no arquivo: \n");
    gets(texto);

    //chamada da função

    ret = criaArquivo(nomeArquivo, texto);

    if (ret == 0)
    {
        printf("Erro na criação do arquivo!");
    }
    else
    {
        printf("Arquivo criado com sucesso!");
    }
    //int fgetc(FILE *arquivo);

    return 0;
}