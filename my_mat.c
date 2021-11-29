#include <stdio.h>
#include "my_mat.h"

static int matrix[10][10];

void thereIsARoute( int b, int c) {
	for (int k = 0; k < 10; k++) {
		for (int i = 0; i < 10; i++) {
     			for (int j = 0; j < 10; j++) {
     				int x = matrix[i][k]+matrix[k][j];
             			if (matrix[i][k] == 0 || matrix[k][j] == 0) {
					x = 0;
				}
				if ( j == k || i == j || i == k || x == 0 ) {
					continue;
				}
				if (matrix[i][j] == 0) {
                        		matrix[i][j] = x;
                    		}
				if (matrix[i][j] > x) {
					matrix[i][j]= x;

				}
            		}
             	}
         } 
}


void afunc () {
	int i, j;       
        for (i = 0; i < 10 ; i = i+1) {
        	for (j = 0 ; j < 10; j = j+1) {      
                	scanf("%d", &matrix[i][j]);
		}
	}
}
	
	
void bfunc (int i,int j){
	if (matrix[i][j] != 0) {
		printf("TRUE");
		printf("\n");
	}
	else { 
		printf("FALSE");
        	printf("\n");
        }
}
           
void cfunc(int i,int j){	
	if (matrix[i][j] != 0) {
               printf("%d", matrix[i][j]);
               printf("\n");
        }
      else{ printf("-1");
        printf("\n");
        }
} 	
	
	
	
			
