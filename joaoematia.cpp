#include <stdio.h>

int main(void){
	
	float maria=1.50, joao=1.30;
	int anos=0;
	
	while(maria>joao){	
		
		maria =  maria + 0.02;	
		joao = joao + 0.03;
		
		printf("maria %.2f \n", maria);
		printf("joao %.2f \n", joao);
		
		
		
		anos+=1;
	}
	
	
	
	printf("o joao finalmente é maior que a maria %i ", anos);
	
}
