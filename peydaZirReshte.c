#include <stdio.h>
#include <string.h>

#define MAX 100

int findSubstring(char *str, char *substr) {
    int lenStr = strlen(str);
    int lenSubstr = strlen(substr);
    int i, j;

    for (i = 0; i <= lenStr - lenSubstr; i++) {
        for (j = 0; j < lenSubstr; j++) {
            if (str[i + j] != substr[j])
                break;
        }

        if (j == lenSubstr)
            return i; 
    }

    return -1; 
}

int main() {
    char str[MAX], substr[MAX];
    int position;

    printf("Enter the main string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove the new line text character

    printf("Enter the substring to find: ");
    fgets(substr, MAX, stdin);
    substr[strcspn(substr, "\n")] = 0; // Remove the new line text character

    position = findSubstring(str, substr);

    if (position != -1)
        printf("Substring found at position %d.\n", position);
    else
        printf("Substring not found.\n");

    return 0;
}
