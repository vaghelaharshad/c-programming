#include<stdio.h>



main(){
	     // Declare and initialize variables
         int myint = 10;
         float myfloat = 20.5f;
          double mydouble = 30.555;
         char mychar = 'A';
      
         // Demonstrate the use of constants
          printf("integer: %d\n", myint);
          printf("float: %.2f\n", myfloat);
          printf("double: %.3lf\n", mydouble);
          printf("character: %c\n", mychar);
          
          // Display the size of different data types
           printf("Size of int: %zu bytes\n", sizeof(int));
           printf("Size of float: %zu bytes\n", sizeof(float));
           printf("Size of double: %zu bytes\n", sizeof(double));
           printf("Size of char: %zu byte\n", sizeof(char));
	  
}



 //summary 

/* 
	The C program declares variables of different data types (int, float, double, char), 
	prints their values, demonstrates the use of constants in expressions, and displays the memory 
	size of each data type using sizeof().
*/
