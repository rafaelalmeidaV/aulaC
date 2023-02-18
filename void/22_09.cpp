#include <stdio.h>

void soma(int num1, int num2){
	int resultado;
	resultado = num1 + num2;
	printf("A soma é %d", resultado);
	
}



int main(){
	
	int num1, num2;
	printf("digite um numero ");
	scanf("%d", &num1);
	
	printf("digite um numero ");
	scanf("%d", &num2);
	
	soma(num1,num2);
	
}
