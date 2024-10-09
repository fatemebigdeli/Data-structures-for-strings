#include <stdio.h>
#include <string.h>

#define MAX 100

void replaceCharacters(char *str, char *find, char *replace) {
    int lenStr = strlen(str);
    int lenFind = strlen(find);
    int lenReplace = strlen(replace);

    if (lenFind != lenReplace) {
        printf("Length of find and replace strings must be the same.\n");
        return;
    }

    for (int i = 0; i < lenStr; i++) {
        for (int j = 0; j < lenFind; j++) {
            if (str[i] == find[j]) {
                str[i] = replace[j];
                break;
            }
        }
    }
}

int main() {
    char str[MAX], find[MAX], replace[MAX];

    printf("Enter the main string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove the new line text character

    printf("Enter the characters to find: ");
    fgets(find, MAX, stdin);
    find[strcspn(find, "\n")] = 0; // Remove the new line text character

    printf("Enter the replacement characters: ");
    fgets(replace, MAX, stdin);
    replace[strcspn(replace, "\n")] = 0; // Remove the new line text character

    replaceCharacters(str, find, replace);

    printf("Resulting string: %s\n", str);

    return 0;
}
