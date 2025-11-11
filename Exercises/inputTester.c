#include <stdio.h>

main()
{
    int number;
    printf("Enter an number:> "); // Prompt the user for a number
    scanf("%d", &number); // Read the input from the user
    printf("Your number multiplied by 1024 is: %d", number * 1024); // Output the result
    return 0;
} 