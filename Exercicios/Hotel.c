#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int D = 0, A = 0, N = 0, tot = 0;
	
	do {
		
		printf(">>>\tValor da diária no 1º dia: ");
		scanf("%d", &D);
		
	} while (D < 0 || D > 1000) ;
	
	do {
		
		printf(">>>\tAumento da diária por dia: ");
		scanf("%d", &A);
		
	} while (A < 0 || A > 1000);
	
	do {
		
		printf(">>>\tDia de chegada no hotel: ");
		scanf("%d", &N);
		
	} while (N < 0 || N > 31);
	
	if (N == 1) {
		
		tot = 31 * 100;
		
	}
	
	else if (N <= 15) {
		
		tot = (D + (N - 1) * A) * (31 - 15 + 1);
		
	}
	
	else if (N > 15) {
		
		tot = (D + 14 * A) * (31 - 15);
		
	}
	
	printf("Valor total: %d!", tot);
	
	
	return 0;
}
