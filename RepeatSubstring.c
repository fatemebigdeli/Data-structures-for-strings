#include <stdio.h>
#include <string.h>

#define MAX 100

int countSubstr(char *str, char *substr) {
    int count = 0;
    int lenStr = strlen(str);
    int lenSubstr = strlen(substr);
    int match;

    for (int i = 0; i <= lenStr - lenSubstr; i++) {
        match = 1;
        for (int j = 0; j < lenSubstr; j++) {
            if (str[i + j] != substr[j]) {
                match = 0;
                break;
            }
        }
        if (match) count++;
    }

    return count;
}

int main() {
    char str[MAX], substr[MAX];


    printf("Enter the main string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; 
    printf("Enter the substring to find: ");
    fgets(substr, MAX, stdin);
    substr[strcspn(substr, "\n")] = 0;

    int count = countSubstr(str, substr);
    printf("The substring '%s' appears %d times in '%s'.\n", substr, count, str);

    return 0;
}
