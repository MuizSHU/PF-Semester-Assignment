#include <iostream>

int main() {
    char str1[] = "HelloWorld";  // Initialize the first string
    char str2[100];              // Declare the second string

    // Input the second string at runtime
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from input if present
    int i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';  // Remove the newline character
            break;
        }
        i++;
    }

    // Compare the two strings
    int j = 0, isEqual = 1;
    while (str1[j] != '\0' || str2[j] != '\0') {
        if (str1[j] != str2[j]) {
            isEqual = 0;
            break;
        }
        j++;
    }

    // Output whether the strings are similar or not
    if (isEqual) {
        printf("The strings are similar.\n");
    } else {
        printf("The strings are not similar.\n");
    }

    // Print the first string in reverse without using built-in functions
    printf("First string in reverse: ");
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    for (int i = len1 - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // Print the second string in reverse without using built-in functions
    printf("Second string in reverse: ");
    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }
    for (int i = len2 - 1; i >= 0; i--) {
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
}