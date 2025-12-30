#include <stdio.h>

int main () {
	int x, y, mult;
	printf("Digite um número inteiro: ");
	scanf("%d", &x);
	printf("Digite outro número inteiro: ");
	scanf("%d", &y);
	
	mult = x * y;
	printf("O resultado é %d", mult);
	
	return 0;
}