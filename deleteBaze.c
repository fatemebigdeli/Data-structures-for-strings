#include <stdio.h>
#include <string.h>

#define MAX 100

void removeSubstring(char *str, int start, int end) {
    int len = strlen(str);
    if (start < 0 || end >= len || start > end) {
        printf("Invalid range\n");
        return;
    }

    int i = start;
    int j = end + 1;
    while (str[j] != '\0') {
        str[i++] = str[j++];
    }
    str[i] = '\0'; // Set the new end of the string
}

int main() {
    char str[MAX];
    int start, end;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; 

    printf("Enter start and end positions for the range to remove (0,1,2,...): ");
    scanf("%d %d", &start, &end);

    removeSubstring(str, start, end);

    printf("Resulting string: %s\n", str);

    return 0;
}
