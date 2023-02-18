#include <stdio.h>

void soma(int num1, int num2){
	
	int soma=0,i;
	
	for(i=num1;i<=num2;i++){
		soma = soma + i;
	}
			
		
	printf("o resultado da soma é %d", soma);
}



int main(){
	
	int num1, num2;
	printf("digite um numero ");
	scanf("%d", &num1);
	
	printf("digite um numero ");
	scanf("%d", &num2);
	
	soma(num1,num2);
	
}
