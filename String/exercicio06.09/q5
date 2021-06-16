#include <stdio.h>
#include <string.h>


void removeOcor(char *s1, char letra){
    int i, j;
    for(i=0; i<strlen(s1); i++){
        if(s1[i] == letra){
            s1[i]--;
        }
    }
		printf("%s", s1);
}

int main(){
    char s1[10], letra, s2[10];
    strcpy(s1,"sbsldsnt");

    printf("Digite uma letra que deseja remover da string: ");
    scanf("%c", &letra);

    removeOcor(s1, letra);
    

    return 0;
}