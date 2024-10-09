#include <stdio.h>
#include <string.h>

#define MAX 100

void splitAndPrint(char *str, char delimiter) {
    int i = 0, j, start;
    int len = strlen(str);

    while (i < len) {
        while (str[i] == delimiter) 
        i++; 

        start = i; 
        while (str[i] != delimiter && i < len) 
        i++; 

        for (j = start; j < i; j++) {
            putchar(str[j]);
        }
        putchar('\n');

        while (str[i] == delimiter) i++; 
    }
}

int main() {
    char str[MAX], delimiter;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove the new line text character


    printf("Enter a delimiter character: ");
    scanf("%c", &delimiter);


    splitAndPrint(str, delimiter);

    return 0;
}