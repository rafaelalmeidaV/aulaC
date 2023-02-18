#include <stdio.h>

int somavetor(int *p){
	int i, soma=0;
	for(i=0;i<5;i++){
		soma = soma + p[i];		
	}
	printf("a soma do vetor: %d ", soma);
}

int main(){	
	int vet[5], i;
	
	for(i=0;i<5;i++){
		printf("digite um numero");
		scanf("%d", &vet[i]);
		}
		somavetor(vet);
}
