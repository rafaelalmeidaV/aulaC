#include <stdio.h>

int main(){
	
	int num, num1,contpar=0,contimpar=0; 
	

	
	for(num=1;num<=15;num++){
		
		printf("digite um numero");
		scanf("%d", &num1);
		
		if(num1 %2 ==0){
			contpar = contpar + 1;
		}else{
			contimpar = contimpar +1;
		}
	} 
	printf("quantidade de numeros par %d", contpar);
	printf("quantidade de numeros impar %d", contimpar);
	
	
}


