//Damon Zhang SBUID:115931039

#include <stdio.h>
#include <stdlib.h>

int my_isalpha(char c) {
	if (c >= 'a' && c < 'z' || c >= 'A' && c < 'Z')
	return 1;
	else 
	return 0;
}
//notes for self: return c >= 'a' && c < 'z' || c >= 'A' && c < 'Z' does the
//same thing b/c if that condition is true in that f statement then it's 1
//so return c >= 'a' && c < 'z' || c >= 'A' && c < 'Z' is the longer version
//of what you just did
int my_isdigit(char c){
	if (c >= '0' || c<= '9')
	return 1;
	else
	return 0;
}
int my_is_upper(char c){
	if (c >= 'A' && c < 'Z')
	return 1;
	else 
	return 0;
}
char my_to_upper(char c){
	if (c >= 'a' && c <= 'z')
	c = c - 'a' + 'A';
	return c;
}
char my_to_lower (char c){
	if (c >= 'A' && c <= 'Z')
	c = c - 'A' + 'a';
	return c; 
}

int main(){
	char c;
	int i;

	for (i=0; i<2; i++){
	printf("Give me c ");scanf("%c",&c); getchar();
	printf("%d\n", my_isalpha(c));
	printf("%d\n", my_isdigit(c));
	printf("%d\n",my_is_upper(c));
	printf("%c\n",my_to_upper(c));
	printf("%c\n",my_to_lower(c));
	}	
}

//COMPLETE; NO ERRORS SPOTTED