#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main() {
	float volume, raio, area;
	
	printf("Digite o raio de uma esfera: ");
	scanf("%f", &raio);
	
	volume = (4 * PI * (raio*raio*raio)) / 3;
	
	printf("O valor do raio digitado para calcular o volume da esfera e: %.1f\n", raio);
	printf("O valor do volume da esfera sera de: %.1f", volume);
	
	return 0;
}