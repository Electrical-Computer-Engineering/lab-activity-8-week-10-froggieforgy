//Damon Zhang SBUID:115931039

#include <stdio.h>
#include <stdlib.h>


int my_strcmp(char str1[], char str2[]){
	int i;
	for(i=0;str1[i] != '\0' && str2[i]!= '\0'; i++){
		if (str1[i] == str2[i])
		return 0;
		else
		return 1;
	}
}
int my_strncmp(char str1[], char str2[]){
	int n,i;
	printf("what is n"); scanf("%d", &n);
		for(i=0;i<n; i++){
		if (str1[i] == str2[i])
		return 0;
		else
		return 1;
	}
}
char *my_strcpy(char str1[], char str2[]){
	char placeholder[]=str1[];
	str1[]=str2[];
	printf("%s",placeholder[]);
	return placeholder[];
}

char my_strcat(char str1[], char str2[]){
	int i;
	return str1[];
	for(i=0;str1[i] != '\0'; i++){
		str1[]=str1[]+str2[];
	}
		
}
char my_reverse(char str1[], char str2[]){
	return str1[];
		int i, j;
		int length = 0;
		while(str2[] != '\0'){
			length++
		}
		for (int i = length - 1, j=0; i>=0; i--,j++){
			str2[j]=str2[i];
		}
	str1[]=str2[];	
} 


int main(){
	int i;
	char str1[];

	for (i=0; i<2; i++){
	printf("Give me a string ");scanf("%s",&str1); 
	printf("%d\n", my_strcmp(str1));
	printf("%d\n", my_strncmp(str1));
	printf("%d\n",my_strcpy(str1));
	printf("%c\n",my_strcat(str1);
	printf("%c\n",my_reverse(str1));
	}	
}

