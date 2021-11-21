#include <stdio.h>

int main()
{

int fat, n;

printf("Escreva um valor que queira saber o seu fatorial: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nO fatorial Vale: %d", fat);
return 0;
}








