#include <stdio.h>

int calculavetor(int *p){
	int i, soma=0;
	for(i=0;i<10;i++){
		soma = soma + p[i];		
		
	}
	soma = soma/10;
	
	return soma;
}

int main(){	
	int vet[10], i, resultado;
	
	for(i=0;i<10;i++){
		printf("digite a nota");
		scanf("%d", &vet[i]);
		}
		resultado = calculavetor(vet);
		
		
		printf("a media da sala: %d ", resultado);
}
