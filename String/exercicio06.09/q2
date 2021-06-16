#include <string.h>
#include <stdio.h>


void concatena(char *s1, char *s2){
    int i, j;
		
    for(i=strlen(s1), j=0; s2[j]!='\0'; j++,i++){
        s1[i] = s2[j];
    }
		s1[i] = '\0';
    printf("%s", s1);
}

int main(){
    char s1[30], s2[10];

    strcpy(s1, "Antonio");
    strcpy(s2, " Balbino");

    concatena(s1, s2);


    return 0;
}