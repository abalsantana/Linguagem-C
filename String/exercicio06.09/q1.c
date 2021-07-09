#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void strcopy(char *s1, char *s2){
	int i;
	for(i=0; s2[i]!='\0'; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	
}



int main(){
	
	char str1[5], str2[5];
	
	printf("digite uma palavra: \n");
	scanf("%s",str1);
	
	printf("\ndigite outra palavra: ");
	scanf("%s",str2);
	
	strcopy(str1, str2);
	
	printf("%s ", str1);

	return 0;
}