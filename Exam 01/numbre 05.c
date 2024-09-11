#include <stdio.h>

main() {
	
    int n,i,j;

// Prompt the user to enter the size of the table
    
    printf("Enter the size of the table (1 to 100): ");
    scanf("%d", &n);

// Validate the input
    
    if (n < 1 || n > 100) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

// Print the multiplication table
    
    printf("\nMultiplication Table:\n");
    
      for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // formatting strings
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Newline for better readability between rows
    }

}


//summary

/*
  =>The C program prompts the user to enter a number for the size of a multiplication table. 
  =>It uses nested for loops to generate and format the table from 1 to the specified size, 
	with results displayed in a neatly aligned format.
  => Constants are used for the table size.
*/
