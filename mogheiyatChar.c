#include <stdio.h>

int main() {
    char str[200];
    char ch;
    int i;
    int count = 0;
    int firstPosition = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            if (firstPosition == -1) {
                firstPosition = i; //Save the first position
            }
            printf("Character '%c' found at position %d\n", ch, i);
            count++;
        }
    }

    if(count > 0) {
        printf("Character '%c' was first found at position %d\n", ch, firstPosition);
        printf("Character '%c' was found %d times in the string.\n", ch, count);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
