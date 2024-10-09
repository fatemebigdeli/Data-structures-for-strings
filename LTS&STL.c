#include <stdio.h>
#include <string.h>

#define MAX 100




void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
        // Convert lowercase to uppercase
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0;
    
    toUpperCase(str);

    printf("String in uppercase: %s\n", str);

    return 0;
}








// void toLowerCase(char *str) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             //Convert uppercase to lowercase
//             str[i] = str[i] - 'A' + 'a';
//         }
//     }
// }

// int main() {
//     char str[MAX];

//     printf("Enter a string: ");
//     fgets(str, MAX, stdin);
//     str[strcspn(str, "\n")] = 0; 

//     toLowerCase(str);

//     printf("String in lowercase: %s\n", str);

//     return 0;
// }
