#include <stdio.h>
  
int main(){
	
	int num,i, contPar=0, contImpar=0;
	
	for(num=1; num <=15;num++){
		
		printf("digite um numero");
		scanf("%d", &i);
		
			if(i%2==0){
				contPar = contPar+1;
				
			}else{
				contImpar = contImpar+1;
				
			}
		
	}
	
	printf("quantidade de pares %d", contPar);
	printf("quantidade de impares %d", contImpar);
	
		
	
}
