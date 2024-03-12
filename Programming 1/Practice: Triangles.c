/******************************************************************************

Name: Matthew
Goal: Print 4 right triangles as described in the powerpoint.
Date: 10/24/23
* _ *
*******************************************************************************/
#include <stdio.h>
#define ROW 10
#define COLUMN 10

int main()
{
    	
    for(int r = 1; r <= ROW; ++r){		
	    for(int c = 1; c <= r; ++c){				
		    printf("*");		
		}		
		printf("\n");	
	}		
	
	for(int r = ROW; r >=1; --r){		
		for(int c = 1; c <= r; ++c){
			printf("*");		
		}		
		printf("\n");	
	}
	for(int r = ROW; r >=1; --r){		
		for(int spaces = 0; spaces<=10-r ; spaces++){
		    printf(" ");
		}
		for(int c = 1; c <= r; ++c){
			printf("*");
		}		
		printf("\n");	
	}
	
	for(int r = 1; r <= ROW; ++r){		
	    for(int spaces = 0; spaces<=10-r ; spaces++){
		    printf(" ");
		}
		for(int c = 1; c <= r; ++c){
			printf("*");
		}
		printf("\n");	
	}	
	
	

    return 0;
}
