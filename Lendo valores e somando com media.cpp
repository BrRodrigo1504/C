#include<stdio.h>                                 								//soma media

int main()
{
	
int n, i, num, soma;
soma = 0;

float media = 0.0;

//numero de elementos
printf("\nNumero de elementos:");
scanf("%d", &n);   							//atribuição de N


//soma
for(i=1; i <= n; i++)
{
	
	printf("\nInserir %d numero: num [%d] = ", i, i);
	scanf("%d", &num);
	soma += num;
}	
	
	
	media = soma / n;
	printf ("\nA soma e: %d ",soma);
	printf("\nA media e: %.2f",media);
	return 0;

}
