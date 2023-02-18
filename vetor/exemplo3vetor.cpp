#include <stdio.h>

int main(){
	
	int i;
	int salario[12];
	int cont=0;
	
	for(i=0;i<12;i++){
		printf("digite o salario do verme");
		scanf("%d", &salario[i]);
		cont = cont + salario[i];
	}
	
	
	
	for(i=0;i<12;i++){
		printf("\no pagamento dele %d", salario[i]);		
	
	}
	printf("o salario total: %d", cont);
}
