#include <stdio.h>

main(){
	
	int i, j; 
    int num = 11; 

    for (i = 1; i <= 4; i++){ 
        for (j = 1; j <= i; j++){ 
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }
	
}
