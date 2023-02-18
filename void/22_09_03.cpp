#include <stdio.h>
void multiplicar(int numero1, int numero2){
	
	int resultado;
	resultado = numero1 * numero2;
	printf("A multiplicacao é %d\n", resultado);
	
}

void subtrair(int n1, int n2){
	
	int resultado;
	resultado = n1 - n2;
	printf("A subtracao é %d\n", resultado);
	
}
void soma(int num1, int num2){
	
	int resultado;
	resultado = num1 + num2;
	printf("A soma é %d\n", resultado);
	
}



int main(){
	
int num1, num2, n1, n2, numero1,numero2;
	printf("digite um numero ");
	scanf("%d", &num1);
	
	printf("digite um numero ");
	scanf("%d", &num2);
	
	soma(num1,num2);
	
	printf("digite um numero ");
	scanf("%d", &n1);
	
	printf("digite um numero ");
	scanf("%d", &n2);
	
	subtrair(n1,n2);
	
	printf("digite um numero ");
	scanf("%d", &numero1);
	
	printf("digite um numero ");
	scanf("%d", &numero2);
	
	multiplicar(numero1,numero2);
}
