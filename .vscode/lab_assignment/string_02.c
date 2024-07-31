#include <stdio.h>
#include <string.h>
#include <ctype.h>

void String(const char *input, char *output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            output[j++] = tolower(input[i]);
        }
    }
    output[j] = '\0'; 
}
int anagrams(const char *str1, const char *str2) {
    char Str1[1000];
    char Str2[1000];

    String(str1, Str1);
    String(str2, Str2);

    if (strlen(Str1) != strlen(Str2)) {
        return 0;
    }
    int len = strlen(Str1);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (Str1[i] > Str1[j]) {
                char temp = Str1[i];
                Str1[i] = Str1[j];
                Str1[j] = temp;
            }
            if (Str2[i] > Str2[j]) {
                char temp = Str2[i];
                Str2[i] = Str2[j];
                Str2[j] = temp;
            }
        }
    }
    if (strcmp(Str1, Str2) == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (anagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}