/*
Program Title: Board
Author: Sebastian Archer
Created: 12/11/2025
Version: 1.0
*/

#include <stdio.h>

int main()
{
    int double1; // Declaring variables to hold first and second double values
    int double2;

    printf("Enter a double:> "); // Prompt the user for double1
    scanf("%d", &double1); // Read the input from the user
    printf("Enter a double:> "); // Prompt the user for double2
    scanf("%d", &double2); // Read the input from the user

    printf("\nSum: %d", double1 + double2); // Output the sum of double1 and double2
    printf("\nDifference: %d", double1 - double2); // Output the difference of double1 and double2
    printf("\nProduct: %d", double1 * double2); // Output the product of double1 and double2
    printf("\nQuotient: %d", double1 / double2); // Output the quotient of double1 and double2
    printf("\nMean: %d", (double1 + double2) / 2); // Output the mean of double1 and double2
    printf("\nMax: %d", (double1 > double2) ? double1 : double2); // Output the maximum of double1 and double2 
    printf("\nMin: %d", (double1 < double2) ? double1 : double2); // Output the minimum of double1 and double2
    return 0;
}