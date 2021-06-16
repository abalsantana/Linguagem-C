#include <string.h>
#include <stdio.h>


int compara(char *s1, char *s2){
    int i, j;
  
    for(i=0, j=0; s1[i]!='\0'; i++,j++){
			if(s1[i] > s2[i]){
				return 1;
			}	else if(s1[i] < s2[i]){
				return -1;
			}
    }
		return 0;
}

int main(){
    char s1[30], s2[10];
		int n;

    strcpy(s1, "Antonio");
    strcpy(s2, "Antonioewtewrt");

    n = compara(s1, s2);
		
		if(n == -1){
			printf("Menor!");
		}else if(n == 1){
			printf("Maior!");
		}else{
			printf("Igual!");
		}

    return 0;
}