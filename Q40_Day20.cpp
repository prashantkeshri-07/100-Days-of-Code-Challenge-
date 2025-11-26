//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char binaryNumber[100]; // To store the input binary number
    char onesComplement[100]; // To store the calculated 1's complement
    int i, length, error = 0;

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    length = strlen(binaryNumber);

    for (i = 0; i < length; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Error: Invalid binary digit found at position %d.\n", i + 1);
            error = 1;
            break; // Exit loop on error
        }
    }

    // Null-terminate the complement string
    onesComplement[length] = '\0';

    if (error == 0) {
        printf("Original binary number: %s\n", binaryNumber);
        printf("1's complement: %s\n", onesComplement);
    }

    return 0;
}