#include<stdio.h>


 main() {
    int num, count = 0;

  
          printf("Enter any number: ");
           scanf("%d", &num);

    
           if (num == 0) {
           count = 1; 
          } else {
        
               num = (num < 0) ? -num : num;

        
              while (num != 0) {
               num /= 10; 
               count++;   
        }
    }

    
          printf("Total number of digits: %d\n", count);
	
      	
	
	
	
	
}
