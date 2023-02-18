#include <stdio.h>

int main (){
	
	int a,b, contDentro=0, contFora=0;
	
	for(b=1;b<=80;b++){
	
		printf("digite um numero");
		scanf("%d", &a);
		
		if(a >= 10 && a<=150){
		contDentro = contDentro + 1;
	}else{
		contFora = contFora +1;
	}
	
	
	
	}
	printf("quantidade de numeros entre eles: %d", contDentro);
	printf("\nquantidade de numeros fora deles: %d", contFora);
}
