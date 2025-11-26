//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter an alphabet: ");
    // Read the character input from the user
    scanf(" %c", &ch); // Note the space before %c to consume any leftover whitespace

    // Convert the character to lowercase for easier comparison
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert uppercase to lowercase
    }

    // Check if the character is a lowercase alphabet
    if (ch >= 'a' && ch <= 'z') {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}