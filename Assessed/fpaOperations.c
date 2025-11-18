/*
Program Title: Board
Author: Sebastian Archer
Created: 12/11/2025
Version: 1.0
*/

#include <stdio.h>

int main()
{
    double double1; // Declaring variables to hold first and second double values
    double double2;

    // requesting user input for two double values
    printf("Enter a double  :> "); // Prompt the user for double1
    scanf("%lf", &double1); // Read the input from the user
    printf("Enter a double  :> "); // Prompt the user for double2
    scanf("%lf", &double2); // Read the input from the user

    // using %.2lf to format the output to 2 decimal places below,
    // source https://www.w3schools.com/c/c_data_types_dec.php && https://www.w3schools.com/c/c_type_conversion.php
    
    printf("\nSum:              %5.2lf", double1 + double2); // Output the sum of double1 and double2
    printf("\nDifference:       %5.2lf", double1 - double2); // Output the difference of double1 and double2
    printf("\nProduct:          %5.2lf", double1 * double2); // Output the product of double1 and double2
    printf("\nQuotient:         %5.2lf", double1 / double2); // Output the quotient of double1 and double2
    printf("\nMean:             %5.2lf", (double1 + double2) / 2); // Output the mean of double1 and double2
    printf("\nMax:              %5.2lf", (double1 > double2) ? double1 : double2); // Output the maximum of double1 and double2 
    printf("\nMin:              %5.2lf", (double1 < double2) ? double1 : double2); // Output the minimum of double1 and double2
    return 0;
}