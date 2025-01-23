#include<iostream>
  

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;
    int upperCase = 0, lowerCase = 0, words = 0;
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Traverse through the string
    while (str[i] != '\0') {
        // Check for vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        // Check for consonants
        else if (isalpha(str[i]) && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                                      str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            consonants++;
        }
        // Check for digits
        else if (isdigit(str[i])) {
            digits++;
        }
        // Check for special characters
        else if (str[i] != ' ' && !isalnum(str[i])) {
            specialChars++;
        }
        // Check for uppercase and lowercase letters
        if (isupper(str[i])) {
            upperCase++;
        }
        if (islower(str[i])) {
            lowerCase++;
        }
        // Check for words (word boundaries are spaces)
        if (i == 0 || str[i - 1] == ' ' && str[i] != ' ') {
            words++;
        }
        
        i++;
    }

    // Output the results
    printf("\nTotal vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialChars);
    printf("Total uppercase letters: %d\n", upperCase);
    printf("Total lowercase letters: %d\n", lowerCase);
    printf("Total words: %d\n", words);

    return 0;
}
