#include <stdio.h>

int main (){
	
	int numero;
	int num[4];
	int i;
	int flag=0;
	
	for(i=0;i<4;i++){
		
		printf("digite um numero");
		scanf("%d", &num[i]);
		
	}
	
	printf("digite um numero");
	scanf("%d", &numero);
	
	for(i=0;i<4;i++){
		if(numero==num[i]){
			printf("\nseu numero esta na posicao %d seu numero esta dentro do vetor",i,numero);
			flag=1;
		}
				
	}
	if(flag==0)
		printf("o numero %d nao existe no vetor", numero);		
		
}
