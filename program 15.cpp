#include <iostream>


int main() {
    char str[1000];
    int count[256] = {0}; // Array to store count of each character (ASCII range)

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Print the count of each character in the string
    printf("The count of each character in the string \"%s\" is:\n", str);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c\t%d\n", i, count[i]);
        }
    }

    return 0;
}