//Damon Zhang SBUID:115931039

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 39

// Function to check if a character is a vowel
int is_vowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

// Function to convert a word to Pig Latin
char* ToPigLatin(char* word) {
    if (word == NULL || *word == '\0') {
        return word;
    }
    // Check if word starts with a vowel
    if (is_vowel(*word)) {
        strcat(word, "way");
    } else {
        // Move consonants to the end and add "ay"
        char first_char = *word;
        memmove(word, word + 1, strlen(word));
        word[strlen(word) - 1] = first_char;
        strcat(word, "ay");
    }

    return word;
}

int main() {
    char words[5][MAX_WORD_LENGTH + 1];

    // Input 
    printf("Enter 5 words (each not longer than 39 letters):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%39s", words[i]);
    }

    // Convert
    for (int i = 0; i < 5; i++) {
        printf("%s ", ToPigLatin(words[i]));
    }
    printf("\n");

}
