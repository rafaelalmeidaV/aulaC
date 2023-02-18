#include <stdio.h>

int main() {
	
	int i=0;
	float num[10];
	
	for (i=0;i<10;i++) {
		
		printf("digite um numero ");
		scanf("%f", &num[i]);
		
	}
	
	for(i=9;i>=0;i--) {
		
		printf("\nos numeros digitados em ordem crescente sao %2.f ", num[i]);
	}
	
}
