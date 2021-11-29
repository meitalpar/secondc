#include <stdio.h>
#include "my_mat.h"



int main() {
	char button  ;
	while(scanf("%c", &button) !='D' ) {
    
		if (button == 'D') {
			break ;
		}
	   
		if (button == 'A') {   
	    		afunc();
	     		scanf("%c", &button);
		} 
		if (button == 'B' || button == 'C'){       
			int i , j ;       
			scanf("%d", &i);
			scanf("%d", &j);
			thereIsARoute(i, j);
			if (button == 'B'){
				bfunc(i,j); 
			}
			if(button == 'C'){
				cfunc(i,j);
			}
		}
	}
	return 0 ;    
} 
