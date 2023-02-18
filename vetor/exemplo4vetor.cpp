#include <stdio.h>

int main(){
	
	int i;
	int salario[3];
	int soma=0;
	int media=0;
	
	for(i=0;i<3;i++){
		
		printf("digite seu salario: ");
		scanf("%d", &salario[i]);
			
		soma = soma + salario[i];
				
		
	}
	

	soma = soma/3;
	
	printf("a media eh %d", soma);
	
	for(i=0;i<3;i++){
		if(salario[i]>soma){
			printf("\no seu salario esta acima da media VERME %d %d",i,salario[i]);	
		}else{
			printf("\n seu salario esta fora da media :( %d %d",i,salario[i]);
		}
			
		
	
		
	}

	
}
