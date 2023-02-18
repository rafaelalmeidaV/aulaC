#include <stdio.h>

int main(){
	
	int number,cont=0;
	
	
	
	while(number>0){
		
		printf("digite um numero");
		scanf("%d", &number);
		
		if(number>0){
			cont = cont + 1;
		}		
		
	}
	
	printf("a quantidade de numeros acima de 0 digitados foi %d ", cont);
	
	
	
	return 0;
}
