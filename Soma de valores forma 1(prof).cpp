//algoritmo de soma
#include <stdio.h>
int main()
{
	int i, n, val, soma=0;
	//Leitura do numero de valores a somar
	printf("Numeros de elementos \n");
	scanf("%d",&n);
	
	//Ciclo para efectuar a soma
	for (i=0; i < n; i++)
	{
		printf("\ninserir %d valor", i+1);
		scanf("%d", &val);
		soma = soma + val;
	}
	
	//imprimir resultado da soma
	printf("A soma total foi de %d\n",soma);
	return 0;
	
	
}
