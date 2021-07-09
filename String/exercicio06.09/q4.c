//STRLEN
#include<string.h>
#include<stdio.h>


char strlenFunct(char *s1){
    int i, j, count=0;
    for(i=0; s1[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char s[20]="maria";
    int n;

    n = strlenFunct(s);

    printf("Total de caracteres: %d", n);

}