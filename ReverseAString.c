#include <stdio.h>
#include <string.h>

#define MAX 100

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove the new line text character

  
    reverseString(str);

 
    printf("Reversed string: %s\n", str);

    return 0;
}
