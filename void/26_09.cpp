#include <stdio.h>


	
	
	int soma(){
		int num1,num2,result;
		printf("digite um numero1: ");
		scanf("%d", &num1);
		
		printf("digite um numero2: ");
		scanf("%d", &num2);
		
		result = num1+num2;
		return result;
	}
	
	int main(){
		int resultado;
		
		resultado = soma();
		printf("%d", resultado);
	}
		

