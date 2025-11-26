//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Prompt the user to enter the side lengths
    printf("Enter the three side lengths of the triangle: ");

    // Read the three side lengths from the user
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } 
    // Check if the triangle is isosceles
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles\n");
    } 
    // If neither equilateral nor isosceles, it must be scalene
    else {
        printf("Scalene\n");
    }

    return 0;
}