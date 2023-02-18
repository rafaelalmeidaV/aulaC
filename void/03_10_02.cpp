#include <stdio.h>

void calcula(int n1, int n2, int n3){
	
	int soma, multiplicar;
	float media;
	
	soma = n1+n2+n3;
	multiplicar = n1*n2*n3;
	media = soma/3;
	
	printf("Soma: %d", soma);
	printf("multiplicacao %d", multiplicar);
	printf("Media: %.2f", media);	
	
}


int main(){
	int num1,num2,num3, i;
	
	for(i=1; i<=100; i++){
		printf("Digite o 1o valor");
		scanf("%d", &num1);
		
		printf("Digite o 2o valor");
		scanf("%d", &num2);
		
		printf("Digite o 3o valor");
		scanf("%d", &num3);
		
		calcula(num1,num2,num3);
		
	}
}

