#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int N1, N2 ;

printf("Digite o primeiro numero: ");

scanf("%d", &N1);

printf("Digite o segundo numero: ");

scanf("%d", &N2);

if (N1 == N2)
 printf("Os numeros são iguais!");

else
 
 if (N1 > N2)
 
 printf("O maior valor e = %d", N1);
 
 else
 
 printf("O maior valor e = %d", N2);

printf("\n");

system("pause");

return (0);
}
