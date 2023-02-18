#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num1, num2;
	
	printf("digite um numero: ");
	scanf("%f", &num1);
	
	printf("digite um numero: ");
	scanf("%f", &num2);
	
	if(num1>num2){
		printf("o maior numero eh = %2.f", num1);
	}
	else{
		printf("o maior numero eh = %2.f", num2);
	}
	return 0;
}
