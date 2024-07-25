#include <stdio.h>
#include <stdlib.h>

int main() {
	float m, dm, cm, mm;
	
	printf("Digite o seu valor em metros: ");
	scanf("%f", &m);
	
	dm = m * 10;
	cm = dm * 10;
	mm =  cm * 10;
	
	printf("O valor digitado em Metros(m) foi: %.1f\n", m);
	printf("O valor da conversao para Decimentros(dm) sera de: %.1f\n", dm);
	printf("O valor da conversao para Centimentros(cm) sera de: %.1f\n", cm);
	printf("O valor da conversao para Milimetros(mm) sera de: %.1f\n", mm);
	
	return 0;
}