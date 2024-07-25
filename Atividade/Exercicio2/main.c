#include <stdio.h>
#include <stdlib.h>


int main() {
	float base, alt, area;
	
	printf("Digite a base do seu triangulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do seu triangulo: ");
	scanf("%f", &alt);
	
	area = (base * alt) / 2;
	
	printf("A area do seu triangulo sera de: %.1f", area);
	
	return 0;
}