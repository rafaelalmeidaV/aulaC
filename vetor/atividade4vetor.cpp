#include <stdio.h>

int main() {
	
	int a[10];
	int b[10];
	int i;
	int c[10];
	
	for(i=0;i<10;i++) {
		printf("escreva um numero para ser armazenado no vetor A: ");
		scanf("%d", &a[i]);
		
		printf("escreva um numero para ser armazenado no vetor B: ");
		scanf("%d", &b[i]);
		
		c[i] = a[i]+b[i];
		
	}
	
	for(i=0;i<10;i++) {
		printf("\nos vetores digitados no vetorA: ", a[i]);
	}
	for(i=0;i<10;i++) {
		printf("\nos vetores digitados no vetorB: ", b[i]);
	}
	for(i=0;i<10;i++) {
		printf("\na soma dos vetores e a primeira posicao do vetor %d %d", i+1 , c[i]);
	}
}
