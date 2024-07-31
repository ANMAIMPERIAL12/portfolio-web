#include<stdio.h>
#include<string.h>
#define MAX_CHARS 256
    
int substring(const char *s) {
    int n = strlen(s);
    int l = 0;
    int s1 = 0;

    int lastIndex[MAX_CHARS];
    for (int i = 0; i < MAX_CHARS; i++) {
        lastIndex[i] = -1;
    }

    for (int e = 0; e < n; e++) {
        char character = s[e];

        if (lastIndex[(int) character] >= s1) {
            s1 = lastIndex[(int) character] + 1;
        }

        lastIndex[(int) character] = e;
        l =     l > (e - s1 + 1)?l : (e - s1 + 1);
    }

    return l;
}

int main() {
    const char*s = "abcabcbb";
    printf("The length of the longest substring without repeating characters is: %d\n", substring(s));
    return 0;
}
    
