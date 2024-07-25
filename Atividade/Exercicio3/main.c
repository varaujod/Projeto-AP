#include <stdio.h>
#include <stdlib.h>

int main() {
	float c, f, k;
	
	printf("Digite a temperatura em Celsius(C): ");
	scanf("%f", &c);
	
	f = 1.8 * c + 32;
	k = c + 273;
	
	printf("A temperatura digitada foi: %.1fC \n", c);
	printf("A temperatura convertida para Fahrenheint sera de: %.1fF \n", f);
	printf("A temperatura convertida para Kelvin sera de: %.1fK \n", k);
	
	return 0;
}