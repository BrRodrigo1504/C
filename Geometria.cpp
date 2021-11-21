#include<stdio.h>


int main()
{

int lado1,lado2,perimetro,area;

printf("Digite o tamanho de um lado:");
scanf("%d",&lado1);

printf("Digite o tamanho de outro lado:");
scanf("%d",&lado2);

if(lado1 == lado2)
{

	printf("Voce deu as medidas de um quadrado");
}
if(lado1 != lado2)
{
	printf("Voce deu as medidas de um retangulo");
}

perimetro = lado1 + lado1 + lado2 + lado2;
area = lado1 * lado2;
printf("\nA area vale %d",area);
printf("\nO perimetro vale %d",perimetro);
return 0;
}



