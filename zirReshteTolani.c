#include <stdio.h>
#include <string.h>

#define MAX 100

void printAllLongestCommonSubstr(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int dp[MAX][MAX];
    int maxLen = 0;

    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (maxLen < dp[i][j]) {
                    maxLen = dp[i][j];
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    if (maxLen == 0) {
        printf("No Common Substring\n");
    } else {
        printf("Longest Common Substrings:\n");
        for (int i = 0; i <= len1; i++) {
            for (int j = 0; j <= len2; j++) {
                if (dp[i][j] == maxLen) {
                    char commonSubstr[maxLen + 1];
                    strncpy(commonSubstr, str1 + i - maxLen, maxLen);
                    commonSubstr[maxLen] = '\0';
                    printf("%s\n", commonSubstr);
                }
            }
        }
    }
}

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; 
    printf("Enter second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; 
    printAllLongestCommonSubstr(str1, str2);

    return 0;
}
