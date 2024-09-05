#include<stdio.h>


  main(){
	        
       	   int number, last_digit, first_digit, temp;

        printf("Enter any number: ");
        scanf("%d", &number);

   
    if (number < 0){
        number = -number;
    }

  
    last_digit = number % 10;

   
    temp = number;
    while (temp >= 10) {
           temp = temp / 10;
    }
        first_digit = temp;

    
        int sum = first_digit + last_digit;

    
       printf("The sum of the first and the last digit: %d\n", sum);

	
	
	
	
	
	
	
	
}
