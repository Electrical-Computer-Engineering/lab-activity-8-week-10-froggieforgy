
//Damon Zhang SBUID:115931039

#include <stdio.h>
#include <string.h>

#define MAX 10


// Function to shift the top character of the string to the right
void shift_string(char* str) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0' && length < MAX) {
        length++;
    }

    // Display the string repeatedly by shifting the top character to the right
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

int main() {
	char input[MAX];
	printf("Input a string "); scanf("%s", &input);
    printf("Input: %s\n", input);
    shift_string(input);
}

//COMPLETE; NO ERRORS SPOTTED