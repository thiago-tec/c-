# include<stdio.h>
# include<stdlib.h>
#include<locale.h> 

int main  (   ) {

     setlocale (LC_ALL,"");
     
	 int placa;
	 
	 printf("Digite o �ltimo n�mero da placa do seu carro\n");
	 scanf("%d",&placa);
	 printf("rodizio do seu carro � ");
	 switch (placa)
	 {	
	 	case 1:	
	 	case 2:
		printf("segunda\n");
	 	break;
	 	case 3:
	 	case 4:
		printf("ter�a\n");
	 	break;
	 	case 5:
	 	case 6:
	 	printf("quarta\n");
	 	break;
	 	case 7:
	 	case 8:
	 	printf("quinta\n");
	 	break;
	 	case 9:
	 	case 0:
	 	printf("sexta\n");
	 	break;
	 	default:
		printf ("Final n�o existente\n\n");	
	 	
	 }
	 printf("\n\ncuidado para n�o ser multado\n\n");
	 system("pause");
	 return 0;
}
