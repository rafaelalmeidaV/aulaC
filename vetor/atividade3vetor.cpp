#include <stdio.h>

int main() {
	
	int a[5];
	int b[5];
	int i;
	
	for(i=0;i<5;i++) {
		printf("digite um numero inteiro ");
		scanf("%d", &a[i]);		
	
	}
	
	for(i=0;i<5;i++) {
		b[i] = a[i];
		printf("\nos valores do vetor a sao: %d", a[i]);
				
	}
	for(i=0;i<5;i++) {
		printf("\ncopiando-os para o vetor b: %d", b[i]);
	}
	
	
}
