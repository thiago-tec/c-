# include<stdlib.h>
# include<stdio.h>
#include<locale.h> 

int main  (   ) {
	
     
	 int i,j;
	 
	 for(i=1; i<=10; i++){
	 	for(j=1;j<=10;j++){
		 
	 	printf("%2i x %2i = %3i\n",j,i,i*j);
		 }	
		 printf("\n");
	}
	
	 
	 
	 return 0;
}
