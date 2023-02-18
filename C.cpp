#include <stdio.h>

int main(){
	
	int num,i,soma=0;
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){
		soma=soma+i;		
	}
	
	printf("a soma dos numeros entre eh: %d ", soma);
}

