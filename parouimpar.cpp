# include<stdio.h>
# include<stdlib.h>
#include<locale.h> 

int main  (   ) {

     setlocale (LC_ALL,"Portuguse");
     
	 int num;
	 printf("digite um numero:\n");
	 scanf("%d",&num);
	 
	 if ( num1 % 2==0){
	 	printf("eh par!\n");
     }
	 
	 else {
	 	printf("eh impar!\n");
	 }
	 
	 
	 system("pause");
	 return 0;
}

