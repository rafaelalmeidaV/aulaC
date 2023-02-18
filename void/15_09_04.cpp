#include <stdio.h>

void calculo(){
	int dataAniversario, dataHoje, soma;

	
	printf("digite o ano do seu nascimento ");
	scanf("%d", &dataAniversario);
	
	printf("digite o ano atual ");
	scanf("%d", &dataHoje);
	
	
	
	soma = dataHoje-dataAniversario;
	printf("%d anos", soma);
}


int main(){	

		
	char nome[20];
	printf("digite seu nome ");
	scanf(" %s", &nome);
	
	printf("%s \n", nome);
	
	calculo();	
}
