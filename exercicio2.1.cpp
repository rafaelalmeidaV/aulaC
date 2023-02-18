#include <stdio.h> 

int main(){
	
	int num=0,resp=0,contpar=0,contimpar=0;
	
	printf("digite um numero:");
	scanf("%d", &num);	
	
	
	while(num!= 0){			
		
		if(num%2==0){
			contpar = contpar + 1;
		}else{
			contimpar = contimpar + 1;
		}
		
		printf("digite um numero:");
		scanf("%d", &num);
	}
		printf("pares = %d ", contpar);
		printf("impares = %d ", contimpar);
}
