#include <stdio.h>

float calculo(){
	int num, soma=0, cont=0;
	float media;
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
	while(num>0){
		soma = soma + num;
		cont++;
		
		printf("digite um numero: ");
		scanf("%d", &num);
	}
	
	media=soma/cont;
	
	return media;
	
}


int main(){
	
	float resultado;
	
	resultado = calculo();
	
	printf("A media dos valores e: %.2f", resultado);
}

