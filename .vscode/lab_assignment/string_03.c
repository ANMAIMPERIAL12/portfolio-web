 #include<stdio.h>
 #include<string.h>

void compressString(const char *str, char *compStr) {
    int len = strlen(str);
    int count = 0;
    int index = 0;

    for (int i = 0; i < len; i++) {
        count++;
        if (i + 1 >= len || str[i] != str[i + 1]) {
            compStr[index++] = str[i];
            if (count > 1) {
                char countStr[10];
                int ind = 0;
                while (count > 0) {
                    countStr[ind++] = '0' + (count % 10);
                    count /= 10;
                }
                for (int j = ind - 1; j >= 0; j--) {
                    compStr[index++] = countStr[j];
                }
            }
            count = 0;
        }
    }
    compStr[index] = '\0';
}

int main() {
    char str[1000];
    char compStr[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    compressString(str, compStr);

    if (strlen(compStr) < strlen(str)) {
        printf("Compressed string: %s\n", compStr);
    } else {
        printf("returning original string: %s\n", str);
    }

    return 0;
}
