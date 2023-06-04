#include <stdio.h>
#include <locale.h>

//EXERCÍCIO SOBRE CINEMA!

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade1, idade2, preco1, preco2;
	
	do {
		
		printf(">>>\tIdade da 1ª amiga: ");
		scanf("%d", &idade1);
		
		if (idade1 <= 17) {
			
			preco1 = 15;
			
		}
		
		else if (idade1 <= 59) {
			
			preco1 = 30;
			
		}
		
		else {
			
			preco1 = 20;
			
		}
		
		printf(">>>\tIdade da 2ª amiga: ");
		scanf("%d", &idade2);
		
		if (idade2 <= 17) {
			
			preco2 = 15;
			
		}
		
		else if (idade2 <= 59) {
			
			preco2 = 30;
			
		}
		
		else {
			
			preco2 = 20;
			
		}
		
		
	} while (idade1 <= 0|| idade1 >= 100 || idade2 <= 0 || idade2 >= 100);

	printf("\n--->\tTotal a pagar: R$%d,00!", preco1 + preco2);
	
	return 0;
}
