//Damon Zhang SBUID:115931039
#include <stdio.h>
#include <string.h>

#define MAX 50

// Function to remove characters in s1 that match characters in s2
void remove_matching_chars(char *s1, const char *s2) {
	int i = 0;
	int k = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int lookup[100] = {0}; // Array to mark characters to remove

    // Mark characters in s2
    for (i = 0; i < len2; i++) {
        lookup[(unsigned char)s2[i]] = 1;
    }

    // Iterate through s1, skipping characters found in s2
    for (i = 0; i < len1; i++) {
        if (!lookup[(unsigned char)s1[i]]) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}

int main() {
    char s1[MAX], s2[MAX];
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 

    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; 

    remove_matching_chars(s1, s2);
    printf("Modified string: %s\n", s1);

}
